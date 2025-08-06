#include<iostream>
// #include<conio.h>
#include<iomanip>
using namespace std;
class Employee{
	private:
		string name;
		float hour,price,day;
	public:
		void Setname(string name){
			this->name=name;
		}
		void Sethour(float hour){
			this->hour=hour;
		}
		void Setprice(float price){
			this->price=price;
		}
		void Setday(float day){
			this->day=day;
		}
		
		string Getname(){
			return name;
		}
		float Getprice(){
			return price;
		}
		float Getday(){
			return day;
		}
		float Gethour(){
			return hour;
		}
};
int main(){
	
	int n,op;
	
	cout<<"\n\n\t\t Enter n	: ";cin>>n; fflush(stdin);cin.clear();
	Employee obj[n];
	
	string name;
	float hour,price,day;
	
	start:
	cout<<"\n\n\t\t [1]. Input Data n";
	cout<<"\n\n\t\t [2]. Output Data n";
	cout<<"\n\n\t\t Enter Option	: ";cin>>op;	fflush(stdin);cin.clear();
	switch(op){
		case 1:{
			for(int i=0;i<n;i++){
				cout<<"\n\n\t\t ["<<i+1<<"]. Input Data Employee";
				cout<<"\n\n\t\t Enter Name	: ";getline(cin,name);	fflush(stdin);cin.clear();
				cout<<"\n\n\t\t Enter Price	: ";cin>>price;			fflush(stdin);cin.clear();
				cout<<"\n\n\t\t Enter Day	: ";cin>>day;			fflush(stdin);cin.clear();
				cout<<"\n\n\t\t Enter Hour	: ";cin>>hour;			fflush(stdin);cin.clear();
				
				obj[i].Setname(name);
				obj[i].Setday(day);
				obj[i].Sethour(hour);
				obj[i].Setprice(price);
				system("cls");
			}
			break;
		}
		case 2:{
			cout<<"\n\n\t\t "<<left<<setw(20)<<"NAME"<<setw(15)<<"PRICE"<<setw(15)<<"HOUR"<<setw(15)<<"DAY"<<"TOTAL";
			for(int i=0;i<n;i++){
				cout<<"\n\n\t\t "<<left<<setw(20)<<obj[i].Getname()<<setw(15)<<obj[i].Getprice()<<setw(15)<<obj[i].Gethour()<<setw(15)<<obj[i].Getday()<<obj[i].Getprice()*obj[i].Gethour()*obj[i].Getday();
			}
			getch();
			break;
		}
	}
	
	system("cls");
	goto start;
	
	
	getch();
	return 0;
}