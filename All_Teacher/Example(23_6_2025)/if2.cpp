#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	start:
	
	float price,discount;
	cout<<"\n\n\t\t Enter Price	: $";cin>>price;
	
	if(price<200){
		discount=10;
	}
	if(price>=200 && price<=499.99){
		discount=25;
	}
	if(price>=500 && price<=999.99){
		discount=30;
	}
	if(price>=1000 && price<=1499.99){
		discount=40;
	}
	if(price>=1500){
		discount=48;
	}
	
	cout<<"\n\n\t\t Discount	: "<<discount<<"% = "<<price*discount/100<<"$";
	cout<<"\n\n\t\t Total	: "<<price - price*discount/100 << "$";
	
	getch();
	system("cls");
	goto start;
	
	getch();
	return 0;
}