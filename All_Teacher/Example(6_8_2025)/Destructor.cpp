#include<iostream>
#include<conio.h>
using namespace std;
class Test{
	public:
	
	Test(){
		cout<<"\n\n\t\t constructor";
	}	
	
	~Test(){
		cout<<"\n\n\t\t Destructor";
	}
};
int main(){
	
	Test obj;
	
	
	getch();
	return 0;
}