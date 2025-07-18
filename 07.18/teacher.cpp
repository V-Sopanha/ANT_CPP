#include<iostream>
#include<iomanip>
using namespace std;
int main(){

    int n;

    cout<<"\n\t\t Entre N : ";cin>>n;  cin.ignore();cin.clear();


    string name[n], school[n];
    float salary[n];

    for (int i = 0; i < n; i++){
        cout<<"\n\t\t ["<<i+1<<"] Data Teacher";
        cout<<"\n\n\t\t Enter Name : ";getline(cin, name[i]);
        cout<<"\n\n\t\t Enter School : ";getline(cin, school[i]);
        cout<<"\n\n\t\t Enter Salary : ";cin>>salary[i];              cin.ignore();cin.clear();
    }

    cout<<"\n\n\t "<<left<<setw(20)<<"name"<<setw(15)<<"school"<<"salary";
    for(int i = 0; i<n; i++){
        cout<<"\n\n\t "<<left<<setw(20)<<name[i]<<setw(15)<<school[i]<<salary[i];
    }


 
    return 0;
}