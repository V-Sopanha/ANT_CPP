#include<iostream>
using namespace std;

void Test(string name="null",  int id=0, string gender="null"){
    cout<<"\n\t Name    : "<<name;
    cout<<"\n\t ID      : "<<id;
    cout<<"\n\t Gender  : "<<gender;
}

int main(){


    Test();
    Test("Panha", 1111, "Male");


    return 0;
}