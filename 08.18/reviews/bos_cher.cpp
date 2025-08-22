#include<iostream>
// #include<conio.h>
#include<iomanip>
// #include<windows.h>
using namespace std;
class Product{
  private:
    int barcode;
    string name,date;
    float price,qty;
  public:
    void SetAll(int barcode,string name,float price,float qty,string Date){
      this->name=name;
      this->barcode=barcode;
      this->date=date;
      this->qty=qty;
      this->price=price;
    }
    void SetQTY(float qty){
      this->qty=qty;
    }
    void Output(){
      cout<<"\n\n\t\t "<<left<<setw(15)<<barcode<<setw(20)<<name<<setw(15)<<qty<<setw(20)<<qty*price<<date;
    }
    
    string Getname(){
      return name;
    }
    string GetDate(){
      return date;
    }
    int GetBarcode(){
      return barcode;
    }
    float GetQTY(){
      return qty;
    }
    float GetPrice(){
      return price;
    }
};
int main(){
  int op,buy_barcode;
  float QTY;
  Product pd[3];
  pd[0].SetAll(1001,"Coca",0.5,50,"20/09/2029");
  pd[1].SetAll(1002,"Apple",5,20,"24/09/2025");
  pd[2].SetAll(1003,"Banana",10,15,"10/01/2026");

  start:
  cout<<"\n\n\t\t [1]. Buy Product";
  cout<<"\n\n\t\t [2]. Add QTY";
  cout<<"\n\n\t\t [3]. View product";
  
  cout<<"\n\n\t\t Enter option  : ";cin>>op; cin.ignore();cin.clear();
  switch(op){
    case 1:{
      
      cout<<"\n\n\t\t Enter Search Barcode for buy  : ";cin>>buy_barcode; cin.ignore();;cin.clear();
      for(int i=0;i<3;i++){
        if(buy_barcode == pd[i].GetBarcode()){
          cout<<"\n\n\t\t Enter QTY  : ";cin>>QTY;    cin.ignore();;cin.clear();
          
          if(QTY<pd[i].GetQTY()){
            pd[i].SetQTY(pd[i].GetQTY()-QTY);
          }
          else{
            cout<<"\n\n\t\t Not enough goods in Stock!";
            // Sleep(2000);
          }
          
        }
      }
      
      break;
    }
    case 2:{
      
      cout<<"\n\n\t\t Enter Search Barcode for buy  : ";cin>>buy_barcode;cin.ignore();;cin.clear();
      for(int i=0;i<3;i++){
        if(buy_barcode == pd[i].GetBarcode()){
          cout<<"\n\n\t\t Enter QTY  : ";cin>>QTY;cin.ignore();;cin.clear();
          
          pd[i].SetQTY(pd[i].GetQTY()+QTY);
          
        }
      }
      
      
      break;
    }
    case 3:{
      for(int i=0;i<3;i++){
        pd[i].Output();
      }
    //   getch();
      break;
    }
  }
  
//   system("cls");
  goto start;
  
//   getch();
  return 0;
}