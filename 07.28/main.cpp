#include<iostream>
using namespace std;

class Myclass{
    public : 
        string name, gender;
        int age;

    


};

Myclass obj, obj2;


int main(){

    obj.name = "Sok Dara";
    obj.age = 19;
    obj.gender = "Male";

    obj2.name = "Phanith";
    obj2.age = 18;
    obj2.gender = "Female";

    cout<<"\n\n\t\t Name    : "<< obj.name ;
    cout<<"\n\n\t\t Age      : "<< obj.age;
    cout<<"\n\n\t\t Gender  : "<< obj.gender;

    cout<<"\n\n\t\t Name    : "<< obj2.name ;
    cout<<"\n\n\t\t Age      : "<< obj2.age;
    cout<<"\n\n\t\t Gender  : "<< obj2.gender;




    return 0;
}