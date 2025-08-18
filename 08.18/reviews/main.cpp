#include <iostream>
#include <iomanip>
using namespace std;

class Student {
public:
    string name;
    int id;

    void Input() {
        cin.ignore();
        cout << "\n\n\t\t Enter Name  : ";
        getline(cin, name);
        cout << "\n\n\t\t Enter ID    : ";
        cin >> id;
    }

    void Output() {
        cout << "\n\n\t\t " << left << setw(20) << name << id;
    }
};

int main() {
    Student stu[3];
    int choice;
    int search;

    while (true) {
        cout << "\n\n\t===== MENU =====";
        cout << "\n\t1. Input Students";
        cout << "\n\t2. Display All Students";
        cout << "\n\t3. Search by ID";
        cout << "\n\t4. Exit";
        cout << "\n\n\tEnter choice: ";
        cin >> choice;

        switch (choice) {
        case 1: 
            for (int i = 0; i < 3; i++) {
                cout << "\n\n\t--- Student " << i + 1 << " ---";
                stu[i].Input();
            }
            break;

        case 2: 
            cout << "\n\n\t===== Student List =====\n";
            cout << "\n\n\t\t " << left << setw(20) << "Name" << "ID";
            for (int i = 0; i < 3; i++) {
                stu[i].Output();
            }
            break;

        case 3:
            cout << "\n\n\t\t Enter Search ID: ";
            cin >> search;
            for (int i = 0; i < 3; i++) {
                if (search == stu[i].id) {
                    cout << "\n\n\t\t Student Found:";
                    stu[i].Output();
                    break;
                }
                if (i == 2) cout << "\n\n\t\t Student not found!";
            }
            break;

        case 4:
            cout << "\n\n\tExiting program...\n";
            return 0;

        default:
            cout << "\n\n\tInvalid choice! Try again.";
        }
    }

    return 0;
}
