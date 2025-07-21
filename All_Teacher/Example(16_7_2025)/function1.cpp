#include<iostream>
#include<conio.h>
using namespace std;
void test(int &num){
	num=500;
	cout<<"\n\n\t\t Number num	: "<<num;
}
void test2(int &a,int &b){
	a+=b; // a = a+b;
}
int main(){
	int n=100;		
	cout<<"\n\n\t\t Number N1	: "<<n;
	test(n);
	cout<<"\n\n\t\t Number N2	: "<<n;
	
//	int a=100,b=200;
//	test2(a,b);
//	cout<<"\n\n\t\t Sum	: "<<a;
	
	
	
	
	getch();
	return 0;
}