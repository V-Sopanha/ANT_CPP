#include<iostream>
using namespace std;

class Person{
    protected:
        string name;
        int age;

    public:
        Person(){
            name="null";
            age = 0;
        }
        Person(string name, int age){
            this->name = name;
            this->age  = age;
        }
};
class Enroll{
    protected: 
        int id;
    
    public:
        Enroll(){
            id = 0;
        }
        Enroll(int id){
            this->id = id;
        }



};
class School: public Person, public Enroll{
    private:
        string cource;
    public:
        School() : Person(), Enroll(), cource("null") {}
        School(string name, string cource, int id, int age) : Person(name, age), Enroll(id), cource(cource) {}

        void Input(){
            cout<<"\n\n\t\t======== [Input] ========";
            cout<<"\n\n\t\t Enter Name    :";  getline(cin,name);
            cout<<"\n\n\t\t Enter ID      : ";cin>>id;
            cout<<"\n\n\t\t Enter Age     : ";cin>>age;
            cout<<"\n\n\t\t Enter Cource  : ";cin>>cource;
        }

        void Display(){
            cout<<"\n\n\t\t======== [Output] ========";
            cout<<"\n\n\t\t Name    : "<<name;
            cout<<"\n\n\t\t ID      : "<<id;
            cout<<"\n\n\t\t Age     : "<<age;
            cout<<"\n\n\t\t Cource  : "<<cource;
        }
    

};


int main(){


    // School obj("Nha", "C++", 1, 20);

    School obj;
    obj.Input();
    obj.Display();


    return 0;
}