#include<iostream>
#include<iomanip>
using namespace std;
class Myclass{
	public:
		string name;
		int id;
	void Input(){
		cout<<"\n\n\t\t Enter Name	: ";getline(cin,name); 	cin.ignore();cin.clear();
		cout<<"\n\n\t\t Enter ID	: ";cin>>id;		cin.ignore();cin.clear();		
	}
	void Output(){
		cout<<"\n\n\t\t "<<left<<setw(20)<<id<<name;
	}
};
Myclass obj[3];
int main(){
	
//	for(int i=0;i<3;i++){
//		cout<<"\n\n\t\t Enter Name	: ";getline(cin,obj[i].name); fflush(stdin);cin.clear();	
//	}
//	
//	for(int i=0;i<3;i++){
//		cout<<"\n\n\t\t Enter Name	: "<<obj[i].name;	
//	}


	for(int i=0;i<3;i++){
		obj[i].Input();
	}
	
	for(int i=0;i<3;i++){
		obj[i].Output();
	}
	
	return 0;
}

