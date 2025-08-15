#include<iostream>
using namespace std;

class Variable{

    private:
        string name;
        int id,age;
    public: 
        void Setname(string name){
            this->name=name;
        }
        void Setname(int id){
            this->id=id;
        }
        void Setage(int age){
            this->age=age;
        }

        string Getname(){
            return name;
        }
        int Getid(){
            return id;
        }
        int Getage(){
            return age;
        }
};
class Teacher: public Variable{
    private:
        string name; 
        int id,age;
    public: 
        void InoutTeacher(){
            cout << "\n\n\t\t ======== [Teacher Input] ======== ";
            cout << "\n\n\t\tEnter Teacher Name: ";cin >> name;
            cout << "\n\n\t\tEnter Teacher ID: ";cin >> id;
            cout << "\n\n\t\tEnter Teacher Age: ";cin >> age;

            Setname(name);
            Setname(id);
            Setage(age);

        }
        void ShowTeacher(){
            cout << "\n\n\t\t ======== [Teacher Output] ======== ";
            cout << "\n\n\t\tTeacher Name: " << Getname();
            cout << "\n\n\t\tTeacher ID: " << Getid();
            cout << "\n\n\t\tTeacher Age: " << Getage();
        }
};

class Student: public Variable{
    private:
        string name; 
        int id,age;
    public: 
        void InoutStudent(){
            cout << "\n\n\t\t ======== [Student Input] ======== ";
            cout << "\n\n\t\tEnter Student Name: ";cin >> name;
            cout << "\n\n\t\tEnter Student ID: ";cin >> id;
            cout << "\n\n\t\tEnter Student Age: ";cin >> age;

            Setname(name);
            Setname(id);
            Setage(age);

        }
        void ShowStudent(){
            cout << "\n\n\t\t ======== [Student Output] ======== ";
            cout << "\n\n\t\tStudent Name: " << Getname();
            cout << "\n\n\t\tStudent ID: " << Getid();
            cout << "\n\n\t\tStudent Age: " << Getage();
        }
};


int main(){



    Teacher tch;
    tch.InoutTeacher();
    tch.ShowTeacher();
    
    Student stu;
    stu.InoutStudent();
    stu.ShowStudent();

    return 0;
}