#include<iostream>
using namespace std;

class Teacher{

    public:
        string name;
        int id;


};

class Student: protected Teacher{

    public:
        void setName(string name){
            this->name = name;
        }
        void setId(int id){
            this->id = id;
        }
        // string getName(){
        //     return name;
        // }
        // int getId(){
        //     return id;
        // }

    void Output() {
        cout << "\n\n\t\t ===== [Output] =====";
        cout << "\n\n\t\t Name  : " << name;
        cout << "\n\n\t\t ID    : " << id;
    }


};


int main(){

    string name;
    int id;

    Student obj;

    cout << "\n\n\t\t Enter Name  : "; getline(cin, name);
    cout << "\n\n\t\t Enter ID    : ";cin >> id;        cin.ignore(); cin.clear();

    obj.setName(name);
    obj.setId(id);

    obj.Output();

    return 0;
}