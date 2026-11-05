#include <iostream>
#include <string>
#include <limits>

using namespace std;

class TodoList {
    private:
        static const int MAX_TASKS = 100;
        string tasks[MAX_TASKS];
        int counter = 0;

    public:
        int getCounter() const {
            return counter;
        }

        void addTask(string response) {
            tasks[counter] = response;
            counter++;
        }
    
        void showTasks() const {
            for (int i = 0; i < counter; i++) {
                cout << i + 1 << ". " << tasks[i] << endl;
            }
        }
        
        void deleteTask(int taskNumber) {
            for (int i = taskNumber - 1; i < counter - 1; i++) {
                tasks[i] = tasks[i + 1];
            }
            
            tasks[counter - 1] = "";
            counter--;
        }
        
        int getValidNumber() {
            int number;
            while (! (cin >> number)) {
                cout << "Type a number: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return number;
        }

        void swapTasks(int firstTask, int secondTask) {
            string temp = tasks[firstTask];
            tasks[firstTask] = tasks[secondTask];
            tasks[secondTask] = temp;
        }

        bool checkIfTaskNotExists(int taskNumber) const {
            if (taskNumber > counter || taskNumber < 1) {
                return true;
            }

            return false;
        }
};

int main(int argc, char const *argv[])
{
    TodoList todoList;

    while (true) {
        cout << "-----------------------" << endl;
        cout << "Add a new task (1)" << endl;
        cout << "Display your tasks (2)" << endl;
        cout << "Remove a task (3)" << endl;
        cout << "Swap two tasks (4)" << endl;
        cout << "Exit program (5)" << endl;
        cout << "-----------------------" << endl << endl;
        
        int choice;
        cout << "Your choice: ";
        choice = todoList.getValidNumber();
        cout << endl;
        
        switch (choice) {
            case 1: {
                string response;
                
                if (todoList.getCounter() == 100) {
                    cout << "Too many tasks! Your limit of 100 tasks have been reached" << endl;
                    continue;
                }
                
                cout << "Type task or (0) to go back: ";
                getline(cin, response);

                if (response == "0") {
                    continue;
                }
                
                todoList.addTask(response);
                break;
            }
                
            case 2:
                cout << "------------" << endl;
                cout << "Your tasks:" << endl;
                todoList.showTasks();
                cout << "------------" << endl;
                break;
            
            case 3: {
                if (todoList.getCounter() < 1) {
                    cout << "You don't have tasks to remove." << endl << endl;
                    continue;
                }
                
                int taskNumber;
                
                cout << "Which task would you like to remove? Type (0) to go back: ";
                taskNumber = todoList.getValidNumber();

                if (taskNumber == 0) {
                    continue;
                }

                if (todoList.checkIfTaskNotExists(taskNumber)) {
                    cout << endl;
                    cout << "This task doesn't exist" << endl << endl;
                    continue;
                }
                
                cout << endl;
                
                todoList.deleteTask(taskNumber);
                cout << "Task removed successfully" << endl;
                break;
            }

            case 4:
                int firstTask;
                int secondTask;

                cout << "Type a number of first task: ";
                firstTask = todoList.getValidNumber();
                cout << "Type a number of second task: ";
                secondTask = todoList.getValidNumber();

                if (todoList.checkIfTaskNotExists(firstTask) || todoList.checkIfTaskNotExists(secondTask)) {
                    cout << endl;
                    cout << "This task doesn't exist" << endl;
                    continue;
                }

                if (firstTask == secondTask) {
                    cout << "You can't swap the same task";
                    continue;
                }

                todoList.swapTasks(firstTask - 1, secondTask - 1);

                cout << endl;
                break;

            case 5:
                return 0;

            default:
                cout << "This option doesn't exist" << endl;
                break;
            }

        cout << endl;
    }

    return 0;
}