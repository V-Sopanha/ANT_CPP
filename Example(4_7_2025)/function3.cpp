#include<iostream>
#include<conio.h>
using namespace std;
string name;
int id,age;
void InputData(){
	cout<<"\n\n\t\t Enter Name	: ";getline(cin,name);		fflush(stdin);cin.clear();
	cout<<"\n\n\t\t Enter ID	: ";cin>>id;				fflush(stdin);cin.clear();
	cout<<"\n\n\t\t Enter Age	: ";cin>>age;				fflush(stdin);cin.clear();
}
void OutputData(){
	cout<<"\n\n\t\t Name	: "<<name;
	cout<<"\n\n\t\t ID	: "<<id;
	cout<<"\n\n\t\t Age	: "<<age;
}
int main(){
	InputData();
	OutputData();

	getch();
	return 0;
}
