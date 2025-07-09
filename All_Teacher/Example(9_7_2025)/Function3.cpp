#include<iostream>
#include<conio.h>
using namespace std;
//
//void king(string NameOfFamular){
//  cout<<"\t\t\n Name of This: "<<NameOfFamular<<endl;
//}
//
//
//void king(int a,int b){
//  int sum = a+b;
//  cout<<"A + B = "<<sum<<endl;
//}
//
//void king(int a,int b,int c){
//  int sum = a * b * c;
//  cout<<"A x B x C = "<<sum<<endl;
//}
//
//
//void king(float a, float b, float c, float d){
//  float sum = a / b / c / d;
//  cout<<"A / B / C / D = "<<sum<<endl;
//}




void king(char ch){
  char c=ch;
  for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
      cout<<c;
    }
    cout<<endl;
  }
}



int main(){
//  king("This G5");
//  
//  king(10,20);
//  
//  king(10,20,30);
//  
//  king(99,32.3,332,23.5);
//  
  king('#');
  
  getch();
  return 0;
}
