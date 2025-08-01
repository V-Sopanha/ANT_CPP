#include<iostream>
#include<iomanip>
using namespace std;

class Employee{

    private: 
        string name;
        float hour, price, day,total;

    public:

        void setName(string name){
            this->name = name;
        }
        void setHour(float hour){
            this->hour = hour;
        }
        void setDay(float day){
            this->day = day;
        }
        void setPrice(float price){
            this->price = price;
        }

        string getName(){
            return name;
        }
        float getHour(){
            return hour;
        }
        float getDay(){
            return day;
        }
        float getPrice(){
            return price;
        }

        void Input(){
            cout<<"\n\n\t\t Enter Name  : "; getline(cin,name); cin.ignore();cin.clear();
            cout<<"\n\n\t\t Enter Hour    : "; cin>>hour; cin.ignore();cin.clear();
            cout<<"\n\n\t\t Enter Day    : "; cin>>day; cin.ignore();cin.clear();
            cout<<"\n\n\t\t Enter Price / h    : "; cin>>price; cin.ignore();cin.clear();
        }
        // void Output(){
        //     cout<<"\n\n\t\t "<<left<<setw(20)<<name<<setw(20)<<hour<<setw(20)<<day<<price;
        // }

        


};


int main(){

    string name;
    float hour, price, day,total;
    
    int n;
    cout<<"Number of Employee : ";cin>>n; cin.ignore();
    Employee obj[n];

    


    for(int i=0;i<n;i++){
        obj[i].Input();
	}

	
    cout<<"\n\n\t\t "<<left<<setw(20)<<"Name"<<setw(20)<<"Hour"<<setw(20)<<"Day"<<setw(20)<<"Price/h"<<"Total";
	for(int i=0;i<n;i++){
		cout<<"\n\n\t\t "<<left<<setw(20)<<obj[i].getName()<<setw(20)<<obj[i].getHour()<<setw(20)<<obj[i].getDay()<<setw(20)<<obj[i].getPrice();
	}


    return 0;
}

