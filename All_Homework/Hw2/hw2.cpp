#include <iostream>
using namespace std;

int id, math, khmer, english;
string name;

void input();
void output(int id, string name, int math, int khmer, int english);
char grade(int math, int khmer, int english);

int main(){

  int opt;
  do{
    cout << "\n\n\t [1] . Input info student";
    cout << "\n\n\t [2] . Show info student";
    cout << "\n\n\t [3] . Exit";
    cout << "\n\n\t Please choose an option : ";
    cin >> opt;
    cin.clear();
    cin.ignore();

    switch (opt){
    case 1:
      input();
      break;
    case 2:
      cout<<"\t=================================";
      output(id, name, math, khmer, english);
      cout << "\n\n\t Grade : " << grade(math, khmer, english);
      cout<<"\n\t=================================";

      break;
    case 3:
      cout << "\n\n\t Exit";
      break;
    default:
      cout << "\n\t ========================================";
      cout << "\n\t ||    Please choose option [1-3]      ||";
      cout << "\n\t ========================================";
      break;
    }
  } while (opt != 3);
}

void input(){
  cout << "\n\n\t Enter ID      : ";cin >> id;              cin.clear();cin.ignore();
  cout << "\n\n\t Enter Name    : ";getline(cin, name);
  cout << "\n\n\t Enter Math    : ";cin >> math;            cin.clear();cin.ignore();
  cout << "\n\n\t Enter Khmer   : ";cin >> khmer;           cin.clear();cin.ignore();
  cout << "\n\n\t Enter English : ";cin >> english;         cin.clear(); cin.ignore();
}

void output(int id, string name, int math = 0, int khmer = 0, int english = 0){
  cout << "\n\n\t ID      : " << id;
  cout << "\n\n\t Name    : " << name;
  cout << "\n\n\t Math    : " << math;
  cout << "\n\n\t Khmer   : " << khmer;
  cout << "\n\n\t English : " << english;
}

char grade(int math = 0, int khmer = 0, int english = 0){
  float average = (math + khmer + english) / 3.0;

  if (average >= 90 && average <= 100){
    return 'A';
  }
  else if (average >= 80 && average < 90){
    return 'B';
  }
  else if (average >= 70 && average < 80){
    return 'C';
  }
  else if (average >= 60 && average < 70){
    return 'D';
  }
  else if (average >= 50 && average < 60){
    return 'E';
  }
  else{
    return 'F';
  }
}
