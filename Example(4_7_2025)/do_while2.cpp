#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int main(){
	int op;
	do{
		cout<<"\n\n\t\t Enter Option	: ";cin>>op;  fflush(stdin);cin.clear();
		switch(op){
			case 1:{
				cout<<"\n\n\t\t Hello 1";
				break;
			}
			case 2:{
				cout<<"\n\n\t\t Hello a";
				break;
			}
			case 3:{
				cout<<"\n\n\t\t Hello #";
				break;
			}
			case 4:{
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
	}while(op!=5);
	
	
	cout<<"\n\n\t\t Welcome";
	
	getch();
	return 0;
}