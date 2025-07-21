#include<iostream>
#include<conio.h>
using namespace std;
int main(){

//	string name1,name2,name3,name4,name5;	32
	
	string name[]={"Dara","Lina","Lisa","Daro","Gina"};     //0 1 2 3 4
		
//	for(auto i:name){
//		cout<<" "<<i;
//	}	
		

	name[0]="AAA";
	name[1]="BBB";
	name[2]="CCC";
	name[3]="DDD";
	name[4]="EEE";
	
	int n = sizeof(name)/sizeof(name[0]);
	
	for(int i=0;i<5;i++){
		cout<<"\n\n\t\t Enter Name	: ";getline(cin,name[i]); fflush(stdin);cin.clear();
	}	
	
	
	for(int i=0;i<n;i++){   //0 1 2 3 4
		cout<<" "<<name[i];
	}
	
	
	
	
	
	
	
	
	
	
	getch();
	return 0;
}