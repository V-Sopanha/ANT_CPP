#include<iostream>
using namespace std;

int main(){

    string name[] = { "A", "B", "C", "D"};
    for(string i:name){
        cout<< " "<<i;
    }
    cout<<endl;

    for(auto j:name){
        cout<<" "<<j;
    }

    return 0;
}