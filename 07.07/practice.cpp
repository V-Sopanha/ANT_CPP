#include<iostream>
using namespace std;


void Output(string name, int id, string gender, int age, string phone_number, float salary){
    cout<<"\n\t Name    : "<<name;
    cout<<"\n\t ID      : "<<id;
    cout<<"\n\t Gender  : "<<gender;
    cout<<"\n\t Age    : "<<age;
    cout<<"\n\t Phone Number    : "<<phone_number;
    cout<<"\n\t Salary    : "<<salary;
}

int main(){

    string name, gender, phone_number;
    int id, age;
    float salary;
    start:

    int opt;
    cout<<"\n\t [1]. Input Data";
    cout<<"\n\t [2]. Output Data";
    cout<<"\n\t [3]. Exit";
    cout<<"\n\t Enter Option : ";cin>>opt;   cin.ignore();cin.clear();

    switch (opt)
    {
    case 1:
        cout<<"\n\t Enter your Name : ";                getline(cin,name);
        cout<<"\n\t Enter your ID : ";cin>>id;          cin.clear();cin.ignore();
        cout<<"\n\t Enter your Gender : ";              getline(cin,gender);
        cout<<"\n\t Enter your Age : ";cin>>age;        cin.clear();cin.ignore();
        cout<<"\n\t Enter your Phone Number : ";        getline(cin,phone_number);
        cout<<"\n\t Enter your Salary : ";cin>>salary;  cin.clear();cin.ignore();
        break;
    case 2:{
        Output(name, id, gender, age, phone_number, salary);
        break;
    }
    case 3: {
        return 0;
        break;
    }
    default:
        cout<<"Enter Option [1-3]";
        break;
    }
    goto start;
    return 0;
}

