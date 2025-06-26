#include<iostream>
using namespace std;
int main(){

    char op;
    start:
    cout<<"\n\n\t\t Enter Option : "; cin >> op;        fflush(stdin);cin.clear();

    switch (op)
    {
    case '1':
        cout<<"\n\n\t\t1";
        break;
    case '#':
        cout<<"\n\n\t\t#";
        break;
    default:
        cout<<"Enter anything else";
        break;
    }

    system("clear");
    goto start;
    return 0;
}