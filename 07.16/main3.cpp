#include<iostream>
using namespace std;

void test(int *num){
    *num = 300;
    cout<<"\n\n\t Num : " << *num;
}

int main(){

    int n=100;

    test(&n);
    cout<<"\n\n\t N : " <<n;



    return 0;
}