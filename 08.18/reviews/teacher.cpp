#include<iostream>
#include<iomanip>
using namespace std;
class Student{
  public:
    string name;
    int id;
  void Input(int id){
    this->id=id;
    cout<<"\n\n\t\t ID  : "<<id;
    cout<<"\n\n\t\t Enter Name  : ";getline(cin,name);   fflush(stdin);cin.clear();
      
  }
  void Output(){
    cout<<"\n\n\t\t "<<left<<setw(20)<<name<<id;
  }
};

int main(){
  
//  Student stu[3];  
//  
//  
//  
//  for(int i=0;i<3;i++){
//    cout<<"\n\n\t\t Enter Name  : ";getline(cin,stu[i].name);   fflush(stdin);cin.clear();
//    cout<<"\n\n\t\t Enter ID  : ";cin>>stu[i].id;        fflush(stdin);cin.clear();  
//  }
//  
//  int search;
//  cout<<"\n\n\t\t Enter Search ID  : ";cin>>search;
//  
//  for(int i=0;i<3;i++){
//    if(search==stu[i].id){
//      cout<<"\n\n\t\t "<<left<<setw(20)<<stu[i].name<<stu[i].id;
//    }  
//  }

  Student obj[2];
  int id_auto=1000;
  
  for(int i=0;i<2;i++){
    id_auto++;
    obj[i].Input(id_auto);
  }
  
  int search;
  cout<<"\n\n\t\t Enter Search ID  : ";cin>>search;
  
  for(int i=0;i<2;i++){
    if(search==obj[i].id){
      obj[i].Output();
    }
  }
  return 0;
}