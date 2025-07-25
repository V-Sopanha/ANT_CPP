#include<iostream>
#include<algorithm>
using namespace std;

int main(){


    int list[] = { 12, 34, 56, 76, 99, 1};
    int n = sizeof(list) / sizeof (list[0]); // n = 6
    // for(int i = 1; i < n; i++ ){ //(1,2,3,4,5) = 5;
    //     for(int j = 0; j < n - 1; j++){ //(0, 1, 2, 3, 4) = 5
    //         if(list[j] > list[j+1]){
    //             int tmp;
    //             tmp         = list[j];
    //             list[j]     = list[j+1];
    //             list[j+1]   = tmp;
    //         }
    //     }
    // }


    sort(list, list+n, greater<int>());


    for(int i = 0; i < n ; i++ ){ 
        cout << " " << list[i];
    }
    
    // for(auto i:list){
    //     cout << " " << i;
    // }




    return 0;
}