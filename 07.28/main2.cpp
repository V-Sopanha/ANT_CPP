#include<iostream>
using namespace std;

class Myclass{
    public : 
        string name, gender;
        int age;

        // void Input(){
        //     cout<<"\n\n\t\t Enter Name : ";getline(cin,name); 
        //     cout<<"\n\n\t\t Enter Age  : "; cin>>age; cin.ignore();cin.clear();
        //     cout<<"\n\n\t\t Enter Gender : ";getline(cin,gender);
        // }
        //  void Output(){
        //     cout<<"\n\n\t\t Name    : "<< name ;
        //     cout<<"\n\n\t\t Age     : "<< age;
        //     cout<<"\n\n\t\t Gender  : "<< gender;

        // }

        void Input();
        void Output();



};

Myclass obj;


int main(){


    obj.Input();obj.Output();

    return 0;
}

void Myclass::Input(){
    cout<<"\n\n\t\t Enter Name : ";getline(cin,name); 
    cout<<"\n\n\t\t Enter Age  : "; cin>>age; cin.ignore();cin.clear();
    cout<<"\n\n\t\t Enter Gender : ";getline(cin,gender);
}
void Myclass::Output(){
    cout<<"\n\n\t\t Name    : "<< name ;
       cout<<"\n\n\t\t Age     : "<< age;
    cout<<"\n\n\t\t Gender  : "<< gender;
}