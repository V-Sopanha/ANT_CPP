#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int main(){
	
	
//	string username;	
//	do{
//		cout<<"\n\n\t\t Enter Username	: ";getline(cin,username);
//		system("cls");
//	}while(username=="");
	
	
	
	string name[]={"AAAA","BBBB","CCCC","DDDD"};
	
	for(string i:name){
		cout<<"  "<<i;
	}
	
	cout<<endl;
	
	for(auto i:name){
		cout<<"  "<<i;
	}
	
	
	
		
	
	
	
	
	
	getch();
	return 0;
}