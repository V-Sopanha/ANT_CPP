#include<iostream>
#include<conio.h>
using namespace std;

void Input(string &name,int &id,int &age){
	cout<<"\n\n\t\t Enter Name	: ";getline(cin,name); 	fflush(stdin);cin.clear();
	cout<<"\n\n\t\t Enter ID	: ";cin>>id;			fflush(stdin);cin.clear();
	cout<<"\n\n\t\t Enter Age	: ";cin>>age;			fflush(stdin);cin.clear();
}

int main(){
	string N;
	int I,A;
	
	Input(N,I,A);
	cout<<"\n\n\t\t Name	: "<<N;
	cout<<"\n\n\t\t ID	: "<<I;
	cout<<"\n\n\t\t Age	: "<<A;
	
	getch();
	return 0;
}