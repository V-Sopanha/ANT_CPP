#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    string name[2][3]={{"A","B","C"}, {"D","E","F"}};

    int n = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            n++;
            cout <<"\n\n\t\t ["<< n <<"]"<<" Enter Name " <<" ["<< i <<"]"<<"["<< j <<"]" << " : "; getline(cin,name[i][j]); 
        }
        cout << endl;
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << name[i][j];
        }
        cout << endl;
    }

    // name[0][0] = "aa";
    // name[0][1] = "bb";
    // name[0][2] = "cc";

    // name[1][0] = "dd";
    // name[1][1] = "ee";
    // name[1][2] = "ff";
    

    // for(int i = 0; i<2 ; i++){
    //     for(int j = 0; j < 3; j++){
    //         cout<< " "<<name[i][j];
    //     }
    //     cout<<endl;
    // }


    // int n = sizeof(list) / sizeof (list[0]); // n = 6
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


    // sort(list, list+n, greater<int>());


    // for(int i = 0; i < n ; i++ ){ 
    //     cout << " " << list[i];
    // }
    
    // for(auto i:list){
    //     cout << " " << i;
    // }




    return 0;
}