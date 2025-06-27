#include<iostream>
using namespace std;

int main(){

    // for (int i = 0; i <= 100; i++){
    //     if (i%2 == 0){
    //         cout << " " <<i;
    //     }
    // }

    // for (int i = 1; i <=12 ; i++){
    //     for (int j = 1; j <= 12; j++){
    //         cout<< i << " x " << j << " = " << i*j << "\n" ;
    //     }
    //     cout << "\n\n";
    // }


    // for (int r = 1; r <= 3; r++){
    //     for (int c = 1; c <=4 ; c++){
    //         for (int i = 1; i <= 12 ; i++){
    //             for (int j = 1 ; j <= 12 ; j++){
    //                 cout<< i << " x " << j << " = " << i*j <<" ";
    //             }
    //         }
    //     }
    // }
    // for (int i = 1; i <= 12; i++)
    // {
    //     for (int j = 1; j <= 12; j++)
    //     {
    //         cout << i << " x " << j << " = " << i * j << " " ;
    //         if ( i == 5 || i ==9){
    //             cout<<"\n\n";
    //         }
    //     }
    // }



    // for (int i = 1; i <= 6; i++){
    //     for (int j = 1; j <= 6; j++){
    //         cout<< "a ";          
    //     }
    //     cout <<"\n";
    // }



    // for (int i = 1; i <= 6; i++){
    //     for (int j = i; j <= 6; j++){ // repleace srart : i
    //         cout<< "a ";          
    //     }
    //     cout <<"\n";
    // }


    // for (int i = 1; i <= 6; i++){
    //     for (int j = 1; j <= 7 - i; j++){ // remote condition : i
    //         cout<< "a ";          
    //     }
    //     cout <<"\n";
    // }

    for (int i = 1; i <= 6; i++){
        for (int j = 1; j <= i ; j++){ 
            cout<< "a ";          
        }
        cout <<"\n";
    }
// a 
// a a 
// a a a 
// a a a a 
// a a a a a 
// a a a a a a 


    return 0;
}