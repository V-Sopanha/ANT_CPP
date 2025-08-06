#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
class Myclass{
	private:
		static string name;
	public:
		static void input(){
			cout<<"\n\n\t\t Enter Name	: ";getline(cin,name);
		}
};
string Myclass::name="null";

int main(){
	
	Myclass::input();
	
	getch();
	return 0;
}