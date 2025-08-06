#include<iostream>
#include<iomanip>
using namespace std;

class Cars{
    private:
        int id, qty;
        string model, color, contact;
        double price;
    public:

    Cars(){
        id = 0;
        qty = 0;
        model = "NULL";
        color = "NULL";
        contact = "NULL";
        price = 0;
    }

    Cars(int id, int qty, string model, string color, string contact, double price){
        this-> id = id;
        this-> qty = qty;
        this-> model = model;
        this-> color = color;
        this-> contact = contact;
        this-> price = price;
    }

    Cars(Cars &p){
        this-> id = p.id;
        this-> qty = p.qty;
        this-> model = p.model;
        this-> color = p.color;
        this-> contact = p.contact;
        this-> price = p.price;
    }

    void OutputDataCars(){
      cout<<"\n\n\t\t ID  : "<<id;
      cout<<"\n\n\t\t Qty  : "<<qty;
      cout<<"\n\n\t\t Model  : "<<model;
      cout<<"\n\n\t\t Color  : "<<color;
      cout<<"\n\n\t\t Contact  : "<<contact;
      cout<<"\n\n\t\t Price  : "<<price;
    }
};

int main(){
    int id, qty;
    string model, color, contact;
    double price;

    // Cars obj1;
    // Cars obj1(1, 10, "Tesla", "red", "0123456789", 20000);


    cout << "\n\n\t\t ID        : ";cin>>id;
    cout << "\n\n\t\t Quality   : ";cin>>qty;
    cout << "\n\n\t\t Model     : ";getline(cin >> ws,model);
    cout << "\n\n\t\t Color     : ";getline(cin >> ws,color);
    cout << "\n\n\t\t Contact   : ";getline(cin >> ws,contact);
    cout << "\n\n\t\t Price     : ";cin>>price;

    Cars obj1(id, qty, model, color, contact, price);
    obj1.OutputDataCars();

    Cars obj2(obj1);
    obj2.OutputDataCars();


    return 0;
}
