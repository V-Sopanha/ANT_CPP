#include<iostream>
#include<conio.h>
using namespace std;
int main(){
  
  start:
  
  float price,discount;
  cout<<"\n\n\t\t Enter Price  : $";cin>>price;
  
  if(price<200){
    discount=10;
    cout<<"\n\n\t\t Discount  : "<<discount;
  }
  else if(price<=500){
    discount=25;
    cout<<"\n\n\t\t Discount  : "<<discount;
  }
  else if(price<=1000){
    discount=30;
    cout<<"\n\n\t\t Discount  : "<<discount;
  }
  else if(price<=1500){
    discount=40;
    cout<<"\n\n\t\t Discount  : "<<discount;
  }
  else if(price>1500){
    discount=48;
    cout<<"\n\n\t\t Discount  : "<<discount;
  }
  
  cout<<"\n\n\t\t Discount  : "<<discount<<"% = "<<price*discount/100<<"$";
  cout<<"\n\n\t\t Total  : "<<price - price*discount/100 << "$";
  
  getch();
  system("cls");
  goto start;
  
  getch();
  return 0;
}
