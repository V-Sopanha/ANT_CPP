#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	
//	= ( 10<2 ) ? (.true.):(.false.);  
	
	int max,a=50,b=60;
	max = (a>b) ? a : b;
	
//	cout<<"\n\n\t\t Max	\3 : "<<max;
	
	string message;
	message = (a>b) ? "True" : "False";
	cout<<"\n\n\t\t Message	: "<<message;
	
	
	
	getch();
	return 0;
}