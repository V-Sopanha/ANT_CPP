#include<iostream>
#include<iomanip>
using namespace std;


int main() {
    int n, op;
    cout << "\n\n\t\t Enter N  : ";
    cin >> n; cin.clear(); cin.ignore();

    int id[n];
    string name[n], school[n];
    float salary[n];

    while (true) {
        cout << "\n\n\t\t ==========================";
        cout << "\n\n\t\t [1]. Input Data";
        cout << "\n\n\t\t [2]. Output Data";
        cout << "\n\n\t\t [3]. Search Data";
        cout << "\n\n\t\t [4]. Sort Data";
        cout << "\n\n\t\t [5]. Update Data";
        cout << "\n\n\t\t [6]. Delete Data";
        cout << "\n\n\t\t [7]. Exit";
        cout << "\n\n\t\t ==========================";
        cout << "\n\n\t\t Enter Option  : ";
        cin >> op; cin.ignore();cin.clear();

        switch (op) {
            case 1: {
                for (int i = 0; i < n; i++) {
                    cout << "\n\n\t\t [" << i + 1 << "]. Input Data Teacher";
                    cout << "\n\n\t\t Enter ID  : ";cin >> id[i];       cin.ignore();cin.clear();
                    cout << "\n\n\t\t Enter Name  : ";  getline(cin, name[i]);
                    cout << "\n\n\t\t Enter School  : ";    getline(cin, school[i]);
                    cout << "\n\n\t\t Enter Salary  : ";cin >> salary[i];       cin.ignore();cin.clear();
                }
                break;
            }
            case 2: {
                cout << "\n\n\t\t " << left << setw(15) << "ID" << setw(20) << "Name" << setw(15) << "School" << "Salary";
                for (int i = 0; i < n; i++) {
                    cout << "\n\n\t\t " << left << setw(15) << id[i] << setw(20) << name[i] << setw(15) << school[i] << salary[i];
                }
                break;
            }
            case 3: {
                string search;
                cout << "\n\n\t\t Enter Name to Search  : ";getline(cin, search);
                bool message = false;
                for (int i = 0; i < n; i++) {
                    if (search == name[i]) {
                        cout << "\n\n\t\t " << left << setw(15) << "ID" << setw(20) << "Name" << setw(15) << "School" << "Salary";
                        cout << "\n\n\t\t " << left << setw(15) << id[i] << setw(20) << name[i] << setw(15) << school[i] << salary[i];
                        message = true;
                        break;
                    }
                }
                if (message == true){
                    cout<<("\n\n\t\t Search successfully !!!");
                }else{
                    cout << "\n\n\t\t Name not found!";
                }
                break;
            }
            case 4:{
                


                break;
            }
            case 5: {

                string update;
                cout << "\n\n\t\t Enter Name to Update  : "; getline(cin, update);
                bool message = false;
                for(int i = 0; i<n; i++){
                    if(update == name[i]){
                        cout << "\n\n\t\t " << left << setw(15) << "ID" << setw(20) << "Name" << setw(15) << "School" << "Salary";
                        cout << "\n\n\t\t [" << i + 1 << "]. Input Data Teacher";
                        cout << "\n\n\t\t Enter ID  : ";cin >> id[i];       cin.ignore();cin.clear();
                        cout << "\n\n\t\t Enter Name  : ";  getline(cin, name[i]);
                        cout << "\n\n\t\t Enter School  : ";    getline(cin, school[i]);
                        cout << "\n\n\t\t Enter Salary  : ";cin >> salary[i];cin.ignore();
                        message = true;
                        break;
                    }
                }
                if (message == true){
                    cout<<("\n\n\t\t Update successfully !!!");
                }else{
                    cout << "\n\n\t\t Name not found!";
                }
                break;
            }
            case 6: {
                string Delete;
                cout << "\n\n\t\t Enter Name to Delete  : "; getline(cin, Delete);

                bool message = false;
                for(int i = 0; i <n ; i++){
                    if(Delete == name[i]){
                        for(int j = i; j < n-1; j++){
                            name[j] = name[j+1];
                            school[j] = school[j+1];
                            salary[j] = salary[j+1];
                        }  
                        message = true;
                    }     
                }
                if (message== true){
                    n--;
                    cout<<("\n\t\tDelete successfully !!!");
                }else{
                    cout << "\n\n\t\t Name not found!";
                } 
                break;
            }
            case 7: {
                cout<<"\n\n\t\t Exit";
                return 0;
            }
            default: {
                cout << "\n\n\t\t Invalid Option!";
                break;
            }
        }
    }
}