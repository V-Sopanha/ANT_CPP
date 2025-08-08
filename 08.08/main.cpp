#include<iostream>
using namespace std;

class Teacher{

    public:
        string name;
        int id;

    void InputTeacher(){
        cout<<"\n\n\t\t Enter Name  : "; getline(cin,name);
        cout<<"\n\n\t\t Enter ID    : "; cin>>id; cin.ignore();cin.clear();
        }
    void OutputTeacher(){
            cout<<"\n\n\t\t ===== [OutPut - Teacher] =====";
            cout<<"\n\n\t\t Name  : "<<name; 
            cout<<"\n\n\t\t ID    : "<<id; 
        }



};

class Student: public Teacher{

    public:
        void InputStudent(){
            cout<<"\n\n\t\t Enter Name  : "; getline(cin,name);
            cout<<"\n\n\t\t Enter ID    : "; cin>>id; cin.ignore();cin.clear();
        }

        void OutputStudent(){
            cout<<"\n\n\t\t ===== [OutPut - Student] =====";
            cout<<"\n\n\t\t Name  : "<<name; 
            cout<<"\n\n\t\t ID    : "<<id; 
        }

};

Teacher tea;
Student stu;


int main(){

    stu.InputStudent();
    stu.OutputStudent();

    tea.InputTeacher();
    tea.OutputTeacher();

    return 0;
}