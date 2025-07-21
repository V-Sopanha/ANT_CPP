#include<iostream>
// #include<conio.h>
using namespace std;

void test(int *num){ 
	*num = 300;
	cout<<"\n\n\t\t Num	: "<<*num;
}

int main(){
	int n=100;
	
	test(&n);
	cout<<"\n\n\t\t N	: "<<n;
	
	// getch();
	return 0;
}