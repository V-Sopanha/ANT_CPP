#include<iostream>
#include<iomanip>
using namespace std;

class Myclass{
    private: 
        string name;
        int id;
    public:
        Myclass(){
            name = "null";
            id = 0;
        }
        Myclass(string name, int id){
            this->name = name;
            this->id   = id;
        }
        // Myclass(string name, int id):name(name), id(id){}
        //                      :bos class privarte (parameter)           

        void Output(){
            cout<<"\n\n\t\t Name    : " <<name;
            cout<<"\n\n\t\t ID      : "<<id;
        }
};


int main(){

    // Myclass obj;

    Myclass obj("Nha", 23);


    obj.Output();

    
    return 0;
}