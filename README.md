# C++ To-Do List

A simple console-based **Object-Oriented Programming (OOP)** project written in C++. The application uses a custom `TodoList` class to organize task management and demonstrates fundamental object-oriented programming concepts in practice.

**Repository:** [task-list-oop-cpp](https://github.com/Piotrejek/task-list-oop-cpp)

## Features

- **Add Tasks** – Add new tasks to your to-do list.
- **Display Tasks** – View all currently saved tasks.
- **Remove Tasks** – Delete a selected task from the list.
- **Swap Tasks** – Change the order of two tasks.
- **Input Validation** – Handle invalid numerical input.
- **Task Limit** – Store up to 100 tasks.
- **Navigation** – Return to the main menu without performing an action.

## Example Usage

Example interaction with the application:

```text
-----------------------
Add a new task (1)
Display your tasks (2)
Remove a task (3)
Swap two tasks (4)
Exit program (5)
-----------------------

Your choice: 1

Type task or (0) to go back: Learn C++

-----------------------
Add a new task (1)
Display your tasks (2)
Remove a task (3)
Swap two tasks (4)
Exit program (5)
-----------------------

Your choice: 1

Type task or (0) to go back: Finish homework

-----------------------
Add a new task (1)
Display your tasks (2)
Remove a task (3)
Swap two tasks (4)
Exit program (5)
-----------------------

Your choice: 2

------------
Your tasks:
1. Learn C++
2. Finish homework
------------

-----------------------
Add a new task (1)
Display your tasks (2)
Remove a task (3)
Swap two tasks (4)
Exit program (5)
-----------------------

Your choice: 4

Type a number of first task: 1
Type a number of second task: 2

-----------------------
Add a new task (1)
Display your tasks (2)
Remove a task (3)
Swap two tasks (4)
Exit program (5)
-----------------------

Your choice: 2

------------
Your tasks:
1. Finish homework
2. Learn C++
------------

-----------------------
Add a new task (1)
Display your tasks (2)
Remove a task (3)
Swap two tasks (4)
Exit program (5)
-----------------------

Your choice: 3

Which task would you like to remove? Type (0) to go back: 1

Task removed successfully

-----------------------
Add a new task (1)
Display your tasks (2)
Remove a task (3)
Swap two tasks (4)
Exit program (5)
-----------------------

Your choice: 2

------------
Your tasks:
1. Learn C++
------------

-----------------------
Add a new task (1)
Display your tasks (2)
Remove a task (3)
Swap two tasks (4)
Exit program (5)
-----------------------

Your choice: 5
```

## Object-Oriented Programming

This project demonstrates basic OOP concepts in C++:

- **Classes and Objects** – The `TodoList` class encapsulates task management functionality.
- **Encapsulation** – Task data and the task counter are stored as private members.
- **Public Methods** – Tasks are managed through public class methods.
- **Separation of Responsibilities** – Task management logic is contained within the `TodoList` class.

## Technologies

- C++
- Standard Library (`iostream`, `string`, `limits`)
- Object-Oriented Programming (OOP)
- Fixed-size arrays
- Loops and conditional statements
- Input validation

## How to Run

### 1. Clone the repository

```bash
git clone https://github.com/Piotrejek/task-list-oop-cpp.git
```

### 2. Navigate to the project directory

```bash
cd task-list-oop-cpp
```

### 3. Compile the program

Using g++:

```bash
g++ app.cpp -o todo
```

### 4. Run the application

**Windows:**
```bash
todo.exe
```

**Linux / macOS:**
```bash
./todo
```

## Menu

| Option | Description |
|:---:|---|
| 1 | Add a new task |
| 2 | Display all tasks |
| 3 | Remove a task |
| 4 | Swap two tasks |
| 5 | Exit the program |

## Project Structure

```text
task-list-oop-cpp/
├── app.cpp
├── .gitignore
└── README.md
```

## Limitations

- Maximum of 100 tasks.
- Tasks are stored in memory and are not saved after closing the program.
- The application runs entirely in the console.
