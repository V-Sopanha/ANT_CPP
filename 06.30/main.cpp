#include<iostream>
using namespace std;
int main(){

    int op;
start:
    cout<<"Enter Option : "; cin >> op; 
    switch (op)
    {
    case 1:
        for (int i = 1; i <= 11; i++){
            for (int j = i; j <= 6; j++){
                cout << "a ";
            }
            cout<<"\n";
            if (i == 6){
                    for (int i = 1; i <= 6; i++){
                        for (int j = 1; j <= i ; j++){ 
                            cout<< "a ";          
                        }
                        cout <<"\n";
                    }
            }
        }
        break;
    case 2:
        for (int i = 1; i <=6; i++){
            for (int c =5; c >= i; c--){
                cout << " ";
            }
            for (int c = 1; c <= i ; c++){
                cout <<"0 ";
            }
            cout<<"\n";
        }
        break;
    case 3:
        for (int i = 1; i <=4; i++){
            for (int o = i; o <= 4 ; o++){
                cout <<"  ";
            }
            cout << "+ - + -";
            cout<<"\n";
        }
        break;
    case 4:
        for (int i = 1; i <=4; i++){
            for (int o = 1; o <= i ; o++){
                cout <<"  ";
            }
            for ( int c = 5 - i ; c >=1; c--){
                cout << c << " ";
            }
            cout<<"\n";
        }
        break;
    
    default:
        cout<<"Enter from [1-4]";
        break;
    }

    goto start;
    return 0;
}
