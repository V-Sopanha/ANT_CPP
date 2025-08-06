#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
class Myclass{
	private:
		string name;
		int id;
	public:
		Myclass(){
			name="null";
			id=0;
		}
		Myclass(string name,int id){
			this->name = name;
			this->id   = id;
		}
		
//		Myclass(string name,int ID):name(name),id(ID){}
		void Output(){
			cout<<"\n\n\t\t Name	: "<<name;
			cout<<"\n\n\t\t ID	: "<<id;
		}
};
int main(){
	
	Myclass obj("Lily",1111);
	obj=Myclass("Dara",2222);
	obj.Output();

	
	getch();
	return 0;
}