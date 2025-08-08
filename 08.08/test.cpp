#include<iostream>
using namespace std;

class Teacher {
public:
    string name;
    int id;

    void InputTeacher() {
        cout << "\n\n\t\t Enter Name  : ";
        getline(cin, name);
        cout << "\n\n\t\t Enter ID    : ";
        cin >> id;
        cin.ignore(); cin.clear();
    }

    void OutputTeacher() {
        cout << "\n\n\t\t ===== [Output - Teacher] =====";
        cout << "\n\n\t\t Name  : " << name;
        cout << "\n\n\t\t ID    : " << id;
    }
};

class Student : public Teacher {
public:
    void InputStudent() {
        cout << "\n\n\t\t Enter Name  : ";
        getline(cin, name);
        cout << "\n\n\t\t Enter ID    : ";
        cin >> id;
        cin.ignore(); cin.clear();
    }

    void OutputStudent() {
        cout << "\n\n\t\t ===== [Output - Student] =====";
        cout << "\n\n\t\t Name  : " << name;
        cout << "\n\n\t\t ID    : " << id;
    }
};

int main() {
    Teacher tea;
    Student stu;
    int choice;

    do {
        cout << "\n\n\t\t ===== Menu =====";
        cout << "\n\t\t 1. Input & Output Student";
        cout << "\n\t\t 2. Input & Output Teacher";
        cout << "\n\t\t 0. Exit";
        cout << "\n\n\t\t Enter your choice: ";
        cin >> choice;
        cin.ignore(); // clear newline from input buffer

        switch (choice) {
            case 1:
                stu.InputStudent();
                stu.OutputStudent();
                break;
            case 2:
                tea.InputTeacher();
                tea.OutputTeacher();
                break;
            case 0:
                cout << "\n\t\t Exiting program...\n";
                break;
            default:
                cout << "\n\t\t Invalid choice. Try again.\n";
        }
    } while (choice != 0);

    return 0;
}
