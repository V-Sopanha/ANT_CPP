#include<iostream>
using namespace std;
int main(){

    float n, dis, total;

    if(n>200){
        dis = 10;
    }
    else if(n<=200 && n >= 499.99){
        dis = 25;
    }
    else if(n<=500 && n >= 999.99){
        dis = 30;
    }
    else if(n<=1000 && n >= 1499.99){
        dis = 40;
    }
    else if(n>1500){
        dis = 45;
    }

    total =  n*(dis/100);
    cout << "Discount : "<< dis << "%" << " = " << total;
    cout << "Total"; 


    return 0;
}