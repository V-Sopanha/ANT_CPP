#include<iostream>
using namespace std;


int main(){

    // string name_1[5] = {"A", "B", "C", "D", "E"}; //or string name[] if add into by {}

    // for(auto i:name_1){
    //     cout<<" "<<i;
    // }

    string name[5]; //have to set size 
    name[0] = "A";
    name[1] = "B";
    name[2] = "C";
    name[3] = "D";
    name[4] = "E";

    int n = sizeof(name) / sizeof(name[0]);

    for(int i = 0; i < n; i++){
        cout<<"\t\n"<<i+1 <<". "<<name[i];
    }
 
    return 0;
}