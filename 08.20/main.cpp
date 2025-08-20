#include <iostream>
using namespace std;

class Book{
    private:
        string title, author, genre;
        int year;
        float price;
    public:
        void setTitle(string title){
            this->title = title;
        }
        void setAuthor(string author){
            this->author = author;
        }
        void setGenre(string genre){
            this->genre = genre;
        }
        void setYear(int year){
            this->year = year;
        }
        void setPrice(float price){
            this->price = price;
        }

        string getTitle(){
            return title;
        }
        string getAuthor(){
            return author;
        }
        string getGenre(){
            return genre;
        }
        int getYear(){
            return year;
        }
        float getPrice(){
            return price;
        }


        bool isOldBook(){
            if (year < 2000){
                return true;
            }
            else{
                return false;
            }
        }


        void Display(){
            cout<<"\n\n\t\t Title is  : "<< getTitle();
            cout<<"\n\n\t\t Author is : "<< getAuthor();
            cout<<"\n\n\t\t Price is  : $ "<< getPrice();
            cout<<"\n\n\t\t Year of Published is  : "<< getYear();
            cout<<"\n\n\t\t Genre is     : "<< getGenre();
            cout<<"\n\n\t\t Is Old Book  : "<< (isOldBook() == true ? "Yes" : "No") ;
            cout<<"\n\n";
        }
};


int main(){

    Book b;

    int op;
    string title, author, genre;
    int year;
    float price;

        while (true) {
        cout << "\n\n\t\t ==========================";
        cout << "\n\n\t\t [1]. View Info Book by Getter Mothod";
        cout << "\n\n\t\t [2]. Insert Info of Book by User Input";
        cout << "\n\n\t\t [3]. Display Info of Book after User Input";
        cout << "\n\n\t\t [4]. Close Program !!";
        cout << "\n\n\t\t ==========================";
        cout << "\n\n\t\t Enter Option  : ";
        cin >> op; cin.ignore();cin.clear();

        switch (op) {
            case 1: {
                b.setTitle("Ponyo");
                b.setAuthor("Hayao Miyazaki");
                b.setYear(2008);
                b.setPrice(18.99);
                b.setGenre("Fantasy");

                cout<<"\n\n\t\t === View Info Of Book by Getter Method ===";
                b.Display();
                    
                break;
            }
            case 2: {
                cout<<"\n\n\t\t === Inset Info of Book By User Input ===";
                cout<<"\n\n\t\t Enter Title     :: "; getline(cin, title);
                cout<<"\n\n\t\t Enter Author  :: "; getline(cin, author);
                cout<<"\n\n\t\t Enter Price  :: "; cin>>price; cin.ignore();cin.clear();
                cout<<"\n\n\t\t Enter Year Of Published  :: "; cin>>year; cin.ignore();cin.clear();
                cout<<"\n\n\t\t Enter Genre  :: "; getline(cin, genre); 

                b.setTitle(title);
                b.setAuthor(author);
                b.setPrice(price);
                b.setYear(year);
                b.setGenre(genre);

                break;

            }
            case 3: {
                cout<<"\n\n\t\t ===  Display Info of Book After User Input ===";
                b.Display();
                break;
            }
            case 4 : {
                cout<<"\n\n\t\t Exit !!";
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


