#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

vector<string> todoList;

void addTask() {
    system("CLS");
    cout << "==========================\n||\t            \t||\n||\tTodo list: \t||\n||\t            \t||\n==========================" << endl;

    string task;
    cout << "Enter task: ";
    getline(cin, task);
    todoList.push_back(task);
    cout << "Task added successfully." << endl;
    cout << "=======================================" << endl;
}

void viewTasks() {

    system("CLS");
    cout << "==========================\n||\t            \t||\n||\tTodo list: \t||\n||\t            \t||\n==========================" << endl;
    for (int i = 0; i < todoList.size(); i++) {
        cout << i + 1 << ". " << todoList[i] << endl;
    }
    cout << "======================================="<<endl;
}

void deleteTask() {
    system("CLS");
    cout << "==========================\n||\t            \t||\n||\tTodo list: \t||\n||\t            \t||\n==========================" << endl;

    viewTasks();
    int taskNum;
    cout << "Enter task number to delete: ";
    cin >> taskNum;
    while (true) {
    if (taskNum > 0 && taskNum <= todoList.size()) {
        todoList.erase(todoList.begin() + taskNum - 1);
        cout << "Task deleted successfully." << endl;
        break;
    }
    else {
        cout << "Invalid task number." << endl;
    }

    }
    cout << "=======================================" << endl;
}

int main() {
    int choice = 0;
    cout << "==========================\n||\t            \t||\n||\tTodo list: \t||\n||\t            \t||\n==========================" << endl;
    while (choice != 4) {
        cout << "1. Add task\n2. View tasks\n3. Delete task\n4. Exit\nEnter choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            addTask();
            break;
        case 2:a
            viewTasks();
            break;
        case 3:
            deleteTask();
            break;
        case 4:
            break;
        default:
            cout << "Invalid option. Try again." << endl;
            break;
        }
    }

    return 0;
}
