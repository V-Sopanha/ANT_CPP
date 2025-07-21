#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main(){

	int n;
	cout<<"\n\n\t\t Enter N	: ";cin>>n;	fflush(stdin);cin.clear();
	string name[n],school[n];
	float salary[n];
	
	for(int i=0;i<n;i++){
		cout<<"\n\n\t\t ["<<i+1<<"]. Input Data Teacher";
		cout<<"\n\n\t\t Enter Name	: ";getline(cin,name[i]);		fflush(stdin);cin.clear();
		cout<<"\n\n\t\t Enter School	: ";getline(cin,school[i]);	fflush(stdin);cin.clear();
		cout<<"\n\n\t\t Enter Salary	: ";cin>>salary[i];			fflush(stdin);cin.clear();
		system("cls");
	}

	
	cout<<"\n\n\t\t "<<left<<setw(20)<<"Name"<<setw(15)<<"School"<<"Salary";
	for(int i=0;i<n;i++){
		cout<<"\n\n\t\t "<<left<<setw(20)<<name[i]<<setw(15)<<school[i]<<salary[i];
	}
	
	
	

	
	getch();
	return 0;
}