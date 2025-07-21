#include<iostream>
#include<conio.h>
using namespace std;

void Input(int *num,int n){ // int num[]
	
	for(int i=0;i<n;i++){
		cout<<" "<<num[i];
	}
}

int main(){
	int n[]={10,20,30,40,50};
	int m=sizeof(n)/sizeof(n[0]);
	
	Input(n,m);
	
	getch();
	return 0;
}