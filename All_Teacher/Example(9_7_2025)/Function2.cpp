#include<iostream>
#include<conio.h>
using namespace std;
void test1(int a){
	cout<<"\n\n\t\t a	: "<<a;
}
void test1(int a,int b){
	cout<<"\n\n\t\t a	: "<<a<<" \t, b	: "<<b;
}
void test1(int a,int b,int c){
	cout<<"\n\n\t\t AVG	: "<<(a+b+c)/3;
}
void test1(string name){
	cout<<"\n\n\t\t Name	: "<<name;
}
int main(){	
	
	test1(10);
	test1(10,20);
	test1(10,20,30);
	test1("Dara");
	
	
	
	getch();
	return 0;
}