#include<iostream>
#include<conio.h>
using namespace std;

void Test(string name="null",int id=0,string gender="null"){
	cout<<"\n\n\t\t Name	: "<<name;
	cout<<"\n\n\t\t Id	: "<<id;
	cout<<"\n\n\t\t Gender	: "<<gender;
}

int main(){	
	Test();
	Test("Sok Lisa",1111,"Female");
	
	getch();
	return 0;
}