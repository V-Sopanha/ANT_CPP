#include<iostream>
using namespace std;

class Employee{

    protected:
        int empID;
        string empName;
        double salary;

    public: 
        Employee(){
            empID=0;
            empName="NULL";
            salary=0;
        }
        Employee(int id, string name, double sal){
            this->empID=id;
            this->empName=name;
            this->salary=sal;
        }
        void ShowInfo(){
            cout<<"\n\n\t\t ID  : "<<empID;
            cout<<"\n\n\t\t Name  : "<<empName;
            cout<<"\n\n\t\t Salary  : "<<salary;
        }

};

class Manager: public Employee{
    private:
        string departmet;
        double bonus;

    public:
        Manager(int id, string name, double sal, string dept, double bon){
            this->empID=id;
            this->empName=name;
            this->salary=sal;
            this->departmet=dept;
            this->bonus=bon;
        }
        void ShowManagerInfo(){
            cout<<"\n\n\t\t ID  : "<<empID;
            cout<<"\n\n\t\t Name  : "<<empName;
            cout<<"\n\n\t\t Salary  : "<<salary;
            cout<<"\n\n\t\t Department  : "<<departmet;
            cout<<"\n\n\t\t Bonus  : "<<bonus;
        }

};



int main(){

    Employee emp(1, "Pnah ",1000);
    emp.ShowInfo();

    Manager man(1, "Panha", 1000, "IT", 200);
    man.ShowManagerInfo();

    // Manager man;
    return 0;
}