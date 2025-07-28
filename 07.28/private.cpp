#include<iostream>
using namespace std;

class Myclass{
    private:
        string name = "Nha", gender = "male";
        int age = 20;

    public :

        // setter : bos
        void setName(string name){
            this->name = name;
        }
        void setGender(string gender){
            this->gender = gender;
        }
        void setAge(int age){
            this->age = age;
        }
        // getter : teanh use
        string getName(){
            return name;
        }
        string getGender(){
            return gender;
        }
        int getAge(){
            return age;
        }

};

Myclass obj;


int main(){

    obj.setName("Voeun Sopanha");
    obj.setGender("Male");
    obj.setAge(18);

    cout<<"\n\n\t\t Name   : " <<obj.getName();
    cout<<"\n\n\t\t Gender : " << obj.getGender();
    cout<<"\n\n\t\t Age    : " << obj.getAge();

    return 0;
}