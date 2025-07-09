#include<iostream>
using namespace std;

void test1(int a){
    cout<<"\n\n\t 1 parameter"<< "| a : "<<a;
}
void test1(int a, int b){
    cout<<"\n\n\t 2 parameter"<< "| a : "<<a<<"| b :" <<  b;

}
void test1(int a, int b, int c){
    cout<<"\n\n\t 3 parameter"<<"| a : "<<a<<"| b : " <<  b<<"| c : "<<c;
}


int main(){


    test1(10);
    test1(10,20,30);
    test1(10,20);





    return 0;
}