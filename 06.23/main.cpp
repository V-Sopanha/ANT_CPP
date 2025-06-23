#include<iostream>
using namespace std;
int main(){


    // int a = 0;
    // if(2)
    //     cout<<"Hello";


start:
    float m, discount, total; 
    cout <<"Enter money : ";cin>>m;

    if(m<200){
        total = m - ( m*0.1);
    }
    if(m>=200 && m <= 499.99){
        total = m - ( m*0.25);
    }
    if(m>=500 &&  m <=999.99){
        total = m - ( m*0.30);
    }
    if(m>=1000 && m <= 1499.99){
        total = m - ( m*0.4);
    }
    if(m > 1500){
        total = m - ( m*0.48);
    }

    // if(m<200){
    //     discount = 0.1;
    // }
    cout<<total;

   
    goto start:;

    return 0;
}