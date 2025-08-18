#include <iostream>
#include <iomanip>
using namespace std;

class Products {
    private:
    int barcode, qty;
    string name, expired;
    float price, total_price;

    public:
    void SetBarcode(int barcode){
        this->barcode = barcode;
    }
    void Setname(string name){
        this->name = name;
    }
    void Setprice(float price){
        this->price = price;
    }
    void Setqty(int qty){
        this->qty = qty;
    }
    void Settotal_price(float total_price){
        this->total_price = total_price;
    }
    void Setexpired(string expired){
        this->expired = expired;
    }

    int Getbarcode(){
        return barcode;
    }
    string Getname(){
        return name;
    }
    float Getprice(){
        return price;
    }
    int Getqty(){
        return qty;
    }
    float Gettotal_price(){
        return total_price;
    }
    string Getexpired(){
        return expired;
    }

    void Output(){
        cout<<"\n\n\t\t"<<left<<setw(20)<<Getbarcode()<<setw(20)<<Getname()<<setw(20)<<Getprice()<<setw(20)<<Getqty()<<setw(20)<<Gettotal_price()<<Getexpired();
    }

};

int main() {

    
    Products pro[2];
    int op;


    pro[0].SetBarcode(1001);
    pro[0].Setname("Coca");
    pro[0].Setprice(0.5);
    pro[0].Setqty(50);
    pro[0].Settotal_price(25);
    pro[0].Setexpired("20/09/2029");

    pro[1].SetBarcode(1002);
    pro[1].Setname("Milk");
    pro[1].Setprice(5);
    pro[1].Setqty(100);
    pro[1].Settotal_price(500);
    pro[1].Setexpired("10/09/2025");

    pro[2].SetBarcode(1003);
    pro[2].Setname("Water");
    pro[2].Setprice(0.25);
    pro[2].Setqty(150);
    pro[2].Settotal_price(37.5);
    pro[2].Setexpired("15/04/2026");

    while (true) {
        cout << "\n\n\t\t ==========================";
        cout << "\n\n\t\t [1]. Output Data";
        cout << "\n\n\t\t [2]. Search Data";
        cout << "\n\n\t\t [3]. Exit";
        cout << "\n\n\t\t ==========================";
        cout << "\n\n\t\t Enter Option  : ";
        cin >> op; cin.ignore();cin.clear();

        switch (op) {
            case 1: {
                cout<<"\n\n\t\t"<<left<<setw(20)<<"BARCODE"<<setw(20)<<"PRO_NAME"<<setw(20)<<"PRICE"<<setw(20)<<"QTY"<<setw(20)<<"TOTAL_PRICE"<<setw(20)<<"EXPIRED"<<endl;
                cout<<"\n\n\t\t----------------------------------------------------------------------------------------------------------------------------";
                for(int i=0;i<3;i++){
                    cout<<"\n\n\t\t"<<left<<setw(20)<<pro[i].Getbarcode()<<setw(20)<<pro[i].Getname()<<setw(20)<<pro[i].Getprice()<<setw(20)<<pro[i].Getqty()<<setw(20)<<pro[i].Gettotal_price()<<pro[i].Getexpired();
                }
                break;
            }
            case 2: {
                int search;
                cout<<"\n\n\t\t Input Product Barcode YOu want to buy  : ";cin>>search;
                
                for(int i=0;i<2;i++){
                    // if(search==pro[i].Getbarcode()){
                    //     cout<<"\n\n\t\t"<<left<<setw(20)<<pro[i].Getbarcode()<<setw(20)<<pro[i].Getname()<<setw(20)<<pro[i].Getprice()<<setw(20)<<pro[i].Getqty()<<setw(20)<<pro[i].Gettotal_price()<<pro[i].Getexpired();
                    // }
                    // else{
                    //     cout<<"Not found";
                    // }
                    cout<<"\n\n"<<pro[i].Getbarcode();
                }
                break;
            }
            case 3: {
                cout<<"\n\n\t\t Exit";
                return 0;
            }
            default: {
                cout << "\n\n\t\t Invalid Option!";
                break;
            }
        }
    }


    return 0;
}
