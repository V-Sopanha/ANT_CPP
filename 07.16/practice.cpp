#include<iostream>
using namespace std;


void Input(string &name, int &id, int &age){

    cout<<"\n\n\t Enter your name : "; getline(cin,name);     
    cout<<"\n\n\t Enter your ID   : ";cin>>id;                  cin.clear();cin.ignore();
    cout<<"\n\n\t Enter your Age   : ";cin>>age;                cin.clear();cin.ignore();

}

int main(){

    string N;
    int I, A;
    Input(N,I,A);


    cout<<"\n\n\t Name : " << N;
    cout<<"\n\n\t ID   : " << I;
    cout<<"\n\n\t Age  : " << A;


    return 0;
}