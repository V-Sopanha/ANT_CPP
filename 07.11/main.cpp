#include <iostream>
using namespace std;

int n=1;

void Test(){

    cout<< " Hello " << n <<endl;
    n++;
    // while (n <=10)
    // {
    //     Test();
    // }
    if(n <= 10){
        Test();
    }

}

int main(){



    Test();



    return 0;
}