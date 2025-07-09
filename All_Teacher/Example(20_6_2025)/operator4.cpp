#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    
    cout<<"\n\n\t\t Enter Number A  : ";cin>>a; fflush(stdin);cin.clear();
    cout<<"\n\n\t\t Enter Number B  : ";cin>>b;	fflush(stdin);cin.clear();
    cout<<"\n\n\t\t Enter Number C  : ";cin>>c;	fflush(stdin);cin.clear();
	
    cout<<"\n\n\t\t "<<a<<"X^2 + "<<b<<"X + "<<c<<" = 0";     
    cout<<"\n\n\t\t "<<b<<"^2 - 4x"<<a<<"x"<<c<<" = "<<b*b-4*a*c;


    return 0;
}
