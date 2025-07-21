#include <iostream>
using namespace std;

void inputStudentInfo(string &name, string &id, string &gender, int &age, float &math, float &khmer, float &english);
void showStudentInfo(string name, string id, string gender, int age, float math, float khmer, float english);
float getTotal(float math, float khmer, float english);
float getAverage(float math, float khmer, float english);
char getGrade(float avg);

int main(){
    string name = "null", id = "null", gender = "null";
    int age = 0;
    float math = 0, khmer = 0, english = 0;
    int option;

    do{
        cout << "\n\n\n\t===============[Menu]===============\n";
        cout << "\n\t\t 1. Input Student Info\n";
        cout << "\n\t\t 2. Show Student Info\n";
        cout << "\n\t\t 3. Show Total Score\n";
        cout << "\n\t\t 4. Show Average and Grade\n";
        cout << "\n\t\t 5. Exit\n";
        cout << "\n\t====================================\n";
        cout << "\n\t\t Enter your option : ";
        cin >> option;

        switch (option){
        case 1:{
            cout << "\n\t====================================\n";
            cout << "\n\t||     1. Input Student Info       ||\n";
            cout << "\n\t====================================\n";
            inputStudentInfo(name, id, gender, age, math, khmer, english);
            break;
        }
        case 2:{
            cout << "\n\t====================================\n";
            cout << "\n\t||     2. Show Student Info       ||\n";
            cout << "\n\t====================================\n";
            showStudentInfo(name, id, gender, age, math, khmer, english);
            break;
        }
        case 3:{
            cout << "\n\t====================================\n";
            cout << "\n\t||     3. Show Total Score       ||\n";
            cout << "\n\t====================================\n";
            cout << "\n\t\t Total Score: " << getTotal(math, khmer, english);
            break;
        }
        case 4:{
            cout << "\n\t====================================\n";
            cout << "\n\t||     4. Show Average and Grade ||\n";
            cout << "\n\t====================================\n";
            float avg = getAverage(math, khmer, english);
            cout << "\n\t\t Average Score: " << avg;
            cout << "\n\n\t\t Grade: " << getGrade(avg);
            break;
        }
        case 5:{
            cout << "\n\t\t Exit.\n";
            break;
        }
        default:
            cout << "\n\t\t Invalid choice. Please try again.\n";
        }

    } while (option != 5);

    return 0;
}

void inputStudentInfo(string &name, string &id, string &gender, int &age, float &math, float &khmer, float &english) {
    cin.ignore();
    cout << "\n\t\t Enter Name: ";      getline(cin, name);
    cout << "\n\t\t Enter ID: ";        getline(cin, id);
    cout << "\n\t\t Enter Gender: ";    getline(cin, gender);
    cout << "\n\t\t Enter Age: "; cin >> age;                    cin.clear(); cin.ignore();
    cout << "\n\t\t Enter Math Score: "; cin >> math;            cin.clear(); cin.ignore();
    cout << "\n\t\t Enter Khmer Score: "; cin >> khmer;          cin.clear(); cin.ignore();
    cout << "\n\t\t Enter English Score: "; cin >> english;      cin.clear(); cin.ignore();
}

void showStudentInfo(string name, string id, string gender, int age, float math, float khmer, float english){
    cout << "\n\t ----- Student Information -----\n ";
    cout << "\n\t\t Name   : " << name;
    cout << "\n\n\t\t ID     : " << id;
    cout << "\n\n\t\t Gender : " << gender;
    cout << "\n\n\t\t Age    : " << age;
    cout << "\n\n\t\t Math   : " << math;
    cout << "\n\n\t\t Khmer  : " << khmer;
    cout << "\n\n\t\t English: " << english;
}

float getTotal(float math, float khmer, float english){
    return math + khmer + english;
}

float getAverage(float math, float khmer, float english){
    return getTotal(math, khmer, english) / 3.0;
}

char getGrade(float avg)
{
    if (avg >= 90){
        return 'A';
    }
    else if (avg >= 80){
        return 'B';
    }
    else if (avg >= 70){
        return 'C';
    }
    else if (avg >= 60){
        return 'D';
    }
    else{
        return 'F';
    }
}