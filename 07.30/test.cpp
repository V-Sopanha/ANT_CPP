#include <iostream>
#include <iomanip>
using namespace std;

class MyClass {
private:
    string name;
    int id;

    void setName(string name) {
        this->name = name;
    }

    void setId(int id) {
        this->id = id;
    }
    string getName() {
        return name;
    }

    int getId() {
        return id;
    }

public:
    void Input() {
        string tempName;
        int tempId;

        cout << "Enter Name  : ";
        cin.ignore(); 
        getline(cin, tempName);

        cout << "Enter ID    : ";
        cin >> tempId;

        setName(tempName);
        setId(tempId);
    }


    void Output() {
        cout << "\n\t\t" << left << setw(20) << getId() << getName();
    }
};

int main() {
    MyClass obj[3];

    for (int i = 0; i < 3; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        obj[i].Input(); 
    }

    cout << "\n\n\t\tID                  Name";
    for (int i = 0; i < 3; i++) {
        obj[i].Output();  
    }

    return 0;
}
