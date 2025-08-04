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
        
        void Output(){
            cout<<"\n\n\t\t Name    : " <<name;
            cout<<"\n\n\t\t ID      : "<<id;
        }

};


int main(){

    Myclass obj;

    obj.Output();

    
    return 0;
}