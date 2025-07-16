#include<iostream>
using namespace std;

// // value parameter
// void test(string name, int id){

// }
// // default parameter
// void test(string name="null", int id=0){

// }

void test(int &a, int &b){
    a += b;
}

int main(){

    int a = 100, b = 200;
    test(a,b);
    cout<<" Sum 1 : " << a <<endl;

    test(a,b);
    cout<<" Sum 2 : " << a <<endl;


    return 0;
}