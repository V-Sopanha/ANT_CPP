#include<iostream>
using namespace std;
    string name;
    int id, age;
void InputData();
void Output();

int main(){

start:    
    int opt;
    cout<<"\n\t [1]. Input Data";
    cout<<"\n\t [2]. Output Data";
    cout<<"\n\t [3]. Exit";
    cout<<"\n\t Enter Option : ";cin>>opt;   cin.ignore();cin.clear();

    switch (opt)
    {
    case 1:
        InputData();
        break;
    case 2:{
        Output();
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
    cout << "\n\tPress Enter to go back to menu...";            cin.ignore();cin.get();
    system("clear");
    goto start;
    return 0;
}


void InputData(){

    cout<<"\t\tEnter Name : ";          getline(cin,name);
    cout<<"\t\tEnter ID : ";cin>>id;    cin.clear();cin.ignore();
    cout<<"\t\tEnter Age : ";cin>>age;  cin.clear();cin.ignore();
}
void Output(){
    cout<<"\t\t Name : "<< name <<endl;
    cout<<"\t\t ID   : "<< id <<endl;
    cout<<"\t\t Age  : "<< age <<endl;
}
