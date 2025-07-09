#include<iostream>

using namespace std;

void output(int id, string name, int math=0, int khmer=0, int english=0)
{
  cout << "ID\t : " << id << endl;
  cout << "Name\t : " << name << endl;
  cout << "Math\t : " << math << endl;
  cout << "Khmer\t : " << khmer << endl;
  cout << "English\t : " << english << endl;
}

char grade(int math = 0, int khmer = 0, int english = 0)
{
  float average = (math + khmer + english) / 3;
  
  if (average >= 90 && average <= 100)
  {
    return 'A';
  }
  else if (average >= 80 && average < 90)
  {
    return 'B';
  }
  else if (average >= 70 && average < 80)
  {
    return 'C';
  }
  else if (average >= 60 && average < 70)
  {
    return 'D';
  }
  else if (average >= 50 && average < 60)
  {
    return 'E';
  }
  
  return 'F';
}

int main()
{
  
  int id, math, khmer, english;
  string name;
  
  cout << "Enter ID :: "; cin >> id;
  cout << "Enter Name :: "; cin >> name;
  cout << "Enter Math :: "; cin >> math;
  cout << "Enter Khmer :: "; cin >> khmer;
  cout << "Enter English :: "; cin >> english;
  
  system("cls");
  
  output(id, name, math, khmer, english);
  cout << "Grade is : " << grade(math, khmer, english) << endl;
  
  return 0;
}