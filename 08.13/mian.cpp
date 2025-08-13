#include<iostream>
using namespace std;

class Redister{
    protected:
        string name;
        int id;
};

class Payment: protected Redister{
    protected: 
        float money;
};
class School : protected Payment{
    private:
        string course;
    public:
        School(){
            name = "null";
            id = 0;
            course = "null";
            money = 0;
        }
        School(string name, int id,string course, float money){
            this->name = name;
            this->id = id;
            this->money = money;
            this->course = course ;
        }
        
        void OutputAll(){
            cout<<"\n\n\t\t Name   : "<< name;
            cout<<"\n\n\t\t ID     : "<< id;
            cout<<"\n\n\t\t Money  : "<< money;
            cout<<"\n\n\t\t Course : "<< course;
        }
};

int main(){

    string name, course;
    int id;
    float money;

    cout<<"\n\n\t\t Enter Name   : "; getline(cin, name);
    cout<<"\n\n\t\t Enter ID     : "; cin>>id;  cin.ignore();cin.clear();
    cout<<"\n\n\t\t Enter Cource : "; getline(cin, course);
    cout<<"\n\n\t\t Enter Money  : "; cin>>money; cin.ignore();cin.clear();

    // School obj("Nha", 1001, 60, "C++");

    School obj(name, id, course, money);
    obj.OutputAll();



}