#include<iostream>
using namespace std;

void Output(string name, int id, string gender, float hieght){
    cout<<"\t\n Name    : "<<name;
    cout<<"\t\n ID      : "<<id;
    cout<<"\t\n Gender  : "<<gender;
    cout<<"\t\n Height  : "<<hieght;
}

int main(){


    Output("panha", 18, "male", 1.6);

    string name = "Nith", gender = "Female";
    int id = 2222;
    float height = 1.6;

    Output(name,id,gender,height);





    
    return 0;
}