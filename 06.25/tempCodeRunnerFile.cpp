#include<iostream>
using namespace std;
int main(){

start;
    // int , char
    int n;

    cout<<"\n\nEnter any number : ";cin>>n; fflush(stdin);cin.clear();
    switch (n)
    {
    case 1:
        cout<<"\n\n\t\t1";
        break;
    case 2:
        cout<<"2";
        break;
    default:
        cout<<"Please enter number from 1 to 2";
        break;
    }
    system("clear");
    goto start;

    return 0;
}