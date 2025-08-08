#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
class Employee{
	private:
		string name;
		int id;
		float salary;
	public:
		Employee(){
			name="NULL";
			id=0;
			salary=0;
		}
		Employee(string name,int id,float salary){
			this->name=name;
			this->id=id;
			this->salary=salary;
		}
		void OutputDataEmployee(){
			cout<<"\n\n\t\t Name	: "<<name;
			cout<<"\n\n\t\t ID	: "<<id;
			cout<<"\n\n\t\t Salary	: "<<salary;
		}
	
};
int main(){
	
	Employee obj1("Dara",1111,1000);
	
	obj1.OutputDataEmployee();
	
	Employee obj2(obj1);
	obj2=obj1;
	
	obj2.OutputDataEmployee();
	
	
	getch();
	return 0;
}