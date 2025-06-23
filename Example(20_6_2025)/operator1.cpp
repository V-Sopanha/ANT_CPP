#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
//	int a=10,b=20;
//	
//	a=a+b;  =>  a+=b;
//	a=a-b;  =>  a-=b;
//	a=a/b;  =>  a/=b;
//	a=a*b;  =>  a*=b;
//	a=a%b;  =>  a%=b;
	
	
	int num = 20,n;
	
//	num++;
	
	
//	cout<<"\n\n\t\t Number	: "<<num++;
//	cout<<"\n\n\t\t Number	: "<<++num;
//	cout<<"\n\n\t\t Number	: "<<num;
	
	
	n=num++;   // n = 20
	n=++num;   // n = 21
	
	cout<<"\n\n\t\t N	: "<<n;
	cout<<"\n\n\t\t Number	: "<<num;
	
	
	
	getch();
	return 0;
}