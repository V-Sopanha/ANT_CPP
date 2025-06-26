#include<iostream>
using namespace std;
int main(){

    int op , id, age ;
    string name,school, telegram;
    float height;
start:
    cout<<"\n\n\t\t [1]. Input Name, School, telegram, ID ";
    cout<<"\n\n\t\t [2]. Input Height, age ";
    cout<<"\n\n\t\t [3]. Show output ";
    cout<<"\n\n\t\t [4]. Exit ";
    cout<<"\n\n\t\t Enter Option : "; cin>>op;          fflush(stdin);cin.clear();

    switch (op)
    {
    case 1:
        cout<<"\n\n\t\t Enter ID :  ";cin>>id;      fflush(stdin);cin.clear();
        cout<<"\n\n\t\t Enter Name : ";cin>>name;   fflush(stdin);cin.clear();
        cout<<"\n\n\t\t Enter School :  ";cin>>school; fflush(stdin);cin.clear();
        cout<<"\n\n\t\t Enter Telegram :  ";cin>>telegram;      fflush(stdin);cin.clear();
        break;
    case 2: 
        cout<<"\n\n\t\t Enter Height :  ";cin>>height;      fflush(stdin);cin.clear();
        cout<<"\n\n\t\t Enter Age :  ";cin>>age;      fflush(stdin);cin.clear();
        break;
    case 3: 
        cout<<"\n\n\t\t =============== OUTPUT ===============";
        cout<<"\n\n\t\t Name :  "<<name;
        cout<<"\n\n\t\t School :  "<<school;
        cout<<"\n\n\t\t telegram :  "<<telegram;
        cout<<"\n\n\t\t ID :  "<<id;
        cout<<"\n\n\t\t Height :  "<<height;
        cout<<"\n\n\t\t Age :  "<<age;
        cout<<"\n\n\t\t =======================================";
        break;
    case 4: 
        return 0;
        break;
    default:
        cout<<"Please choose option [1-4]";
        break;
    }
    goto start;

    return 0;
}