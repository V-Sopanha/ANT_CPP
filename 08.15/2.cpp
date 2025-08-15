#include<iostream>
using namespace std;

class MasterAcc{

    public:
        virtual void deposit(){
            cout << "Deposit function called 1." << endl;
        }
};

class SavingsAcc: public MasterAcc{

    public:
    // Overriding the deposit function
    void deposit(){
        cout << "Deposit function called 2." << endl;
    }
};

int main(){
      
    MasterAcc *m = new SavingsAcc();
    m->deposit(); // This will call the deposit function of MasterAcc, not SavingsAcc

    MasterAcc *m2 = new MasterAcc();
    m2->deposit(); // This will call the deposit function of MasterAcc

    delete m; 
    delete m2; 
    return 0;

}