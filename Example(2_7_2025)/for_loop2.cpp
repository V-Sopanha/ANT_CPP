#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int main(){

	char a=219;
	cout<<"\n\n\t\t";
	system("color 6");
	for(int i=1;i<=100;i++){
		cout<<a;
		Sleep(100);	
	}
	
	getch();
	return 0;
}