#include<iostream>
using namespace std;

class Color{
    protected:
        string colorName;   
    public:
        Color(){
            colorName = "Black";
        }
        Color(string colorName){
            this->colorName = colorName;
        }

};
class Brand{
    protected: 
        string brandName;
    public:
        Brand(){
            brandName = "Null";
        }
        Brand(string brandName){
            this->brandName = brandName;
        }
};
class Car:public Color, public Brand{
    private: 
        string modelName; 
        int modelYear;
        int price;
    public: 
        Car(){
            modelName = "Null";
            modelYear = 0;
            price = 0;
        }
        // Car(string modelName, int modelYear, int price, string colorName, string brandName): Color(colorName), Brand(brandName) {}
        Car(string name, int year, int cost, string colorName, string brandName): Color(colorName), Brand(brandName) {
            modelName = name;
            modelYear = year;
            price = cost;

        }

    void Display(){
        cout<<"\n\n\t\t Modal Name : "<< modelName;
        cout<<"\n\n\t\t Modal Year : "<< modelYear;
        cout<<"\n\n\t\t price      : "<< price;
        cout<<"\n\n\t\t Brand Color : "<< colorName;
        cout<<"\n\n\t\t Brand Name : "<< brandName;
    }
};

int main(){

    Car obj("Model S", 2020, 30000, "Tesla", "Red");
    obj.Display();


}
