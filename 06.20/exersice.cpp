#include<iostream>
using namespace std;
int main(){


    int a,b,c,delta;

    cout<<"Enter Number a : ";cin>>a;
    cout<<"Enter Number b : ";cin>>b;
    cout<<"Enter Number c : ";cin>>c;
    
    delta = (b*b) - (4*a*c);

    cout<<"Example : "<<a<<"X^2 + "<<b<<"X"<<" + " << c <<" = 0"<<endl; 

    cout<<"\n\t"<< b<<"^2" << " - " <<"4x"<<a<<"x"<<c << " = " << delta;
    return 0;
}