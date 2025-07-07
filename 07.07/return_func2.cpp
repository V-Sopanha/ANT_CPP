#include<iostream>
using namespace std;


// void Output(string name, int id, string gender, float hieght){
//     cout<<"\t\n Name    : "<<name;
//     cout<<"\t\n ID      : "<<id;
//     cout<<"\t\n Gender  : "<<gender;
//     cout<<"\t\n Height  : "<<hieght;
// }
void Output(string name, int id, string gender, float hieght);
  
int main(){
  
    string name, gender;
    int id;
    float height;
    start:
    int opt;
    cout<<"\n\t [1]. Input Data";
    cout<<"\n\t [2]. Output Data";
    cout<<"\n\t [3]. Exit";
    cout<<"\n\t Enter Option : ";cin>>opt;   cin.ignore();cin.clear();

    switch (opt)
    {
    case 1:
        cout<<"\n\tEnter Name : ";          getline(cin,name);
        cout<<"\n\tEnter ID : ";cin>>id;    cin.clear();cin.ignore();
        cout<<"\n\tEnter Gender : ";cin>>gender;  getline(cin,gender);
        cout<<"\n\tEnter height : ";cin>>height;    cin.clear();cin.ignore();
        break;
    case 2:{
        Output(name, id, gender, height);
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
    cout << "\n\tPress Enter to go back to menu...";         cin.ignore();cin.get();
    system("clear");
    goto start;
    return 0;
}

// void Input(string name, int id, string gender, float hieght){
//     cout<<"\n\tEnter Name : ";          getline(cin,name);
//     cout<<"\n\tEnter ID : ";cin>>id;    cin.clear();cin.ignore();
//     cout<<"\n\tEnter Gender : ";cin>>gender;  getline(cin,gender);
//     cout<<"\n\tEnter height : ";cin>>height;    cin.clear();cin.ignore();
// }

void Output(string name, int id, string gender, float hieght){
    cout<<"\t\n Name    : "<<name;
    cout<<"\t\n ID      : "<<id;
    cout<<"\t\n Gender  : "<<gender;
    cout<<"\t\n Height  : "<<hieght;
}
