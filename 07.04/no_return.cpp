#include<iostream>
using namespace std;
    string name;
    int id, age;
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

int main(){

    InputData();
    Output();

    return 0;
}
