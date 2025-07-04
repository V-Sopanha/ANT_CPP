#include<iostream>
using namespace std;
int main(){

    int i = 1;
    // do
    // {
    //     /* code */
    //     cout<<"Hello World "<<i<<endl;
    //     i++;
    // } while (i <= 10);
    

    // do
    // {
    //     /* code */
    //     cout<<"Hello World "<<i<<endl;
    //     i++;
    //     if (i >=10){
    //         break;
    //     }
    // } while (true);
    
    int opt;

    do
    {
        cout<<"\n\n\t\t Enter Option : "; cin >> opt;       cin.clear();cin.ignore();
        switch (opt)
        {
        case 1:
            cout<<"\n\n\t\t1";
            break;
        case 2:
            cout<<"\n\n\t\t#";
            break;
        default:
            break;
        }
    } while (opt!= 5);
    


    return 0;      
}