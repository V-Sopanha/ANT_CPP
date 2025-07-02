#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int main(){

	while(true){
		char op;
		cout<<"\n\n\t\t Enter Option	: ";cin>>op;  fflush(stdin);cin.clear();
		switch(op){
			case '1':{
				cout<<"\n\n\t\t Hello 1";
				break;
			}
			case 'a':{
				cout<<"\n\n\t\t Hello a";
				break;
			}
			case '#':{
				cout<<"\n\n\t\t Hello #";
				break;
			}
			case '+':{
				cout<<"\n\n\t\t Hello +";
				break;
			}
			default:{
				cout<<"\n\n\t\t Wrong!";
				break;
			}
			
		}
		getch();
		system("cls");
	}
	
	
	getch();
	return 0;
}