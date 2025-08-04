#include<iostream>
// #include<conio.h>
#include<iomanip>
using namespace std;

#ifdef _WIN32
    #include <windows.h>
#else
    #include <unistd.h>
#endif

void sleepSeconds(int seconds) {
#ifdef _WIN32
    Sleep(seconds * 1000);
#else
    sleep(seconds);
#endif
}
void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
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
  
  cout<<"\n\n\t\t Enter n  : ";cin>>n; cin.ignore();cin.clear();
  Employee obj[n];
  
  string name;
  float hour,price,day;
  
  start:
  cout<<"\n\n\t\t [1]. Input Data n";
  cout<<"\n\n\t\t [2]. Output Data n";
  cout<<"\n\n\t\t Enter Option  : ";cin>>op;  cin.ignore();cin.clear();
  switch(op){
    case 1:{
      for(int i=0;i<n;i++){
        cout<<"\n\n\t\t ["<<i+1<<"]. Input Data Employee";
        cout<<"\n\n\t\t Enter Name  : ";getline(cin,name); 
        cout<<"\n\n\t\t Enter Price  : ";cin>>price;      cin.ignore();cin.clear();
        cout<<"\n\n\t\t Enter Day  : ";cin>>day;      cin.ignore();cin.clear();
        cout<<"\n\n\t\t Enter Hour  : ";cin>>hour;      cin.ignore();cin.clear();
        
        obj[i].Setname(name);
        obj[i].Setday(day);
        obj[i].Sethour(hour);
        obj[i].Setprice(price);
        // system("cls");
        clearScreen();
      }
      break;
    }
    case 2:{
      cout<<"\n\n\t\t "<<left<<setw(20)<<"NAME"<<setw(15)<<"PRICE"<<setw(15)<<"HOUR"<<setw(15)<<"DAY"<<"TOTAL";
      for(int i=0;i<n;i++){
        cout<<"\n\n\t\t "<<left<<setw(20)<<obj[i].Getname()<<setw(15)<<obj[i].Getprice()<<setw(15)<<obj[i].Gethour()<<setw(15)<<obj[i].Getday()<<obj[i].Getprice()*obj[i].Gethour()*obj[i].Getday();
      }
    //   getch();
      break;
    }
  }
  
//   system("cls");
    clearScreen();
  goto start;
  
  
//   getch();
  return 0;
}