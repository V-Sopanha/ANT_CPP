#include<iostream>
// #include<conio.h>
#include<iomanip>
#include <cstdlib>
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



using namespace std;
int main(){

  int max=100;
  string name[max],school[max];
  int id[max],op,count=-1;
  
  start:
  cout<<"\n\n\t\t [1]. Input Data";
  cout<<"\n\n\t\t [2]. Output Data";
  cout<<"\n\n\t\t [3]. Exit";
  cout<<"\n\n\t\t Enter Option  : ";cin>>op; fflush(stdin);cin.clear();
  clearScreen();
  switch(op){
    case 1:{
      count++;
      cin.ignore();
      cout<<"\n\n\t\t >>>> Input Data <<<<";
      cout<<"\n\n\t\t Enter Name  : ";getline(cin,name[count]);    fflush(stdin);cin.clear();
      cout<<"\n\n\t\t Enter School  : ";getline(cin,school[count]);  fflush(stdin);cin.clear();
      cout<<"\n\n\t\t Enter Id  : ";cin>>id[count];          fflush(stdin);cin.clear();
      break;
    }
    case 2:{
      cout<<"\n\n\t\t >>>> Output Data <<<<";
      for(int i=0;i<=count;i++){
        cout<<"\n\n\t\t "<<left<<setw(15)<<id[i]<<setw(20)<<name[i]<<school[i];
      }
    sleepSeconds(3);
      break;
    }
    case 3:{
      exit(0);
      break;
    }
  }
  
  clearScreen();
  goto start;
  

  
sleepSeconds(3);
  return 0;
}