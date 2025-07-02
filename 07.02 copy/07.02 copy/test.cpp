#include<iostream>
using namespace std;
int main(){

//  a a a a a a
//  a a a a a 
//  a a a a 
//  a a a 
//  a a 
//  a 
//  a a
//  a a a
//  a a a a
//  a a a a a 
//  a a a a a a

  
//  for(int i=1;i<=11;i++){
//    
//    if(i<=6){
//      for(int j=i;j<=6;j++){
//        cout<<" a";
//      }
//    }
//    if(i>=7){
//      for(int j=12-i;j<=6;j++){
//        cout<<" a";
//      }
//    }
//    cout<<endl;
//  }



//          a
//        a a
//      a a a
//    a a a a
//  a a a a a 
//a a a a a a


//for(int i=1;i<=6;i++){
//
//  for(int k=i;k<=5;k++){
//    cout<<"  ";
//  }
//  
//  for(int j=1;j<=i;j++){
//    cout<<" *";
//  }
//  cout<<endl;
//}




//for(int i=1;i<=6;i++){
//  for(int j=1;j<=6;j++){
//    if(j==3){
//      cout<<" 1";
//    }
//    else if(i==4){
//      cout<<" 0";
//    }
//    else{
//      cout<<" a";
//    }
//    
//  }
//  cout<<endl;
//}




for(int i=1;i<=6;i++){
  for(int j=1;j<=6;j++){
    if(i==j){
      cout<<" 0";
    }
    else{
      cout<<" a";
    }
    
  }
  cout<<endl;
}

  return 0;
}