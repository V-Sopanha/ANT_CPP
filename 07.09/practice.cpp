#include<iostream>
using namespace std;

void king(string name="null"){
    cout<<"\n\n\t======================================================================================================";
    cout<<"\n\n\t 1. Im the king";
    cout<<"\n\n\t======================================================================================================";
}

void king(int a, int b){
    cout<<"\n\n\t 2. Sum of "<<a <<" + "<< b << " = " << a+b;
    cout<<"\n\n\t======================================================================================================";
}

void king(int c){
    int n = 0;
    for(int i = 1; i<=c; i++){
        n += i;
    }
    cout<<"\n\n\t 3. Total sum from 1 to " << c << " is " << n ;
    cout<<"\n\n\t======================================================================================================";
}

void king(float a, float b, float c){
    cout<<"\n\n\t 4. Average of " << "C++ : "<< a << " | " << "HTML & CSS : "<< b << " | "<< "Bootstrap : "<< c << " = " << (a+b+c)/3;
    cout<<"\n\n\t======================================================================================================";
}

void king(string name, int id, int age,string gender){
    cout<<"\n\n\t 5. Name  : "<< name;
    cout<<"\n\n\t    ID  : "<< id;
    cout<<"\n\n\t    Age  : "<< age;
    cout<<"\n\n\t    Gender  : "<< gender;
    cout<<"\n\n\t======================================================================================================";

}

int main(){


    king();
    king(2,3);
    king(100);
    king(80,90,100);
    king("panha",1111, 18, "male");

    return 0;
}