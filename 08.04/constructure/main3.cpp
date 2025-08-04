#include<iostream>
#include<iomanip>
using namespace std;

class Employee{
    private: 
        string name;
        int id;
        float salary;
    public:
        Employee(){
            name = "null";
            id = 0;
            salary = 0;
        }
        Employee(string name, int id, float salary){
            this->name = name;
            this->id = id;
            this->salary = salary;
        }

        void Output(){
            cout<<"\n\n\t\t +====== [ OutPut ] ======+";
            cout<<"\n\n\t\t Name    : " <<name;
            cout<<"\n\n\t\t ID      : "<<id;
            cout<<"\n\n\t\t Salary : "<<salary;
        }
};



int main(){

    string name;
    int id;
    float salary;
    
    cout<<"\n\n\t\t Enter Name      : "; getline(cin,name);
    cout<<"\n\n\t\t Enter ID        : "; cin>>id; cin.ignore();cin.clear();
    cout<<"\n\n\t\t Enter Salary    : "; cin>>salary; cin.ignore();cin.clear();
    

    Employee obj(name, id, salary);

    obj.Output();
    return 0;
}