#include<iostream>
using namespace std;

class Bank{
    public:
        string account_number = "100 123 123", username = "Chan Dalen";
        double balance = 0.0;

        public:
            virtual void deposit() = 0 ;
            virtual void widthrow() = 0;
            virtual void checkBalance() = 0;
};
class Master : public Bank{

    public: 
        double balance =  0.0 ,  widthrow = 0.0,  deposit = 0.0;
        string account_number = "null", username = "null";

    public:
        void deposit(){
            cout<<"\n\n\t\t How much money do you want to deposite ? "; cin>> deposit;
        }
        void widthrow(){
            cout<<"\n\n\t\t How much money do you want to widthrow ? "; cin>> widthrow;
        }
        balance = deposit  - widthrow;
        void checkBalance(){
            cout<<"\n\n\t\t ------ Checking current balance ------ ";
            cout<<"\n\n\t\t Accout Number  : " << account_number;
            cout<<"\n\n\t\t User name      : "<< username;
            cout<<"\n\n\t\t Cuurent Balance : "<< balance ;
        }
};

class Saving : public Bank{
    public: 
        double balance =  0.0 ,  widthrow = 0.0,  deposit = 0.0;
        string account_number = "null", username = "null";

    public:
        void deposit(){
            cout<<"\n\n\t\t How much money do you want to deposite ? "; cin>> deposit;
        }
        void widthrow(){
            cout<<"\n\n\t\t How much money do you want to widthrow ? "; cin>> widthrow;
        }
        balance = (deposit + deposit*0.05)  - widthrow ;
        void checkBalance(){
            cout<<"\n\n\t\t ------ Checking current balance ------ ";
            cout<<"\n\n\t\t Accout Number  : " << account_number;
            cout<<"\n\n\t\t User name      : "<< username;
            cout<<"\n\n\t\t Cuurent Balance : "<< balance ;
        }
};


int main(){

    Bank *obj1 = new Master();
    Bank *obj2 = new Saving();
    

    int op;
    start:
    cout<<"\n\n\t\t [1]. Master Accout";
    cout<<"\n\n\t\t [2]. Saving Acccout";
    cout<<"\n\n\t\t [3]. Exit";
    cout<<"\n\n\t\t Enter Option  : ";cin>>op;
    
    switch(op){
        case 1:{
            cout<<"\n\n\t\t FOR MASTER ACCOUTN";
            obj1->deposit();
            obj1->widthrow();
            obj1->checkBalance();
            break;
        }
        case 2:{
            cout<<"\n\n\t\t FOR SAVING ACCOUTN";
            obj2->deposit();
            obj2->widthrow();
            obj2->checkBalance();
        break;
        }
        case 3:{   
            return 0;
        }
    }
    
    goto start;
    return 0;
}
