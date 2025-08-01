#include<iostream>
#include<iomanip>
using namespace std;


class MyClass{
    public:
        string name;
    int id;

    void Input(){
        cout<<"Enter Name  : "; getline(cin,name);
        cout<<"Enter ID    : "; cin>>id; cin.ignore();cin.clear();
    }

    void Output(){
        cout<<"\n\n\t\t "<<left<<setw(20)<<id<<name;
    }
};

MyClass obj[3], obj2;

int main(){


    for(int i=0;i<3;i++){
		obj[i].Input();
	}
	
	for(int i=0;i<3;i++){
		obj[i].Output();
	}
	
	return 0;
}