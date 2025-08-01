#include <iostream>
using namespace std;
class MyClass
{
    public:
        static string name;
        static int id;
    static void Input()
    {
        cout << "Hello ";
        cout << "Hello";
    }
};
string MyClass::name = "Vi Sal";
int MyClass::id = 21;
int main()
{
    cout << "Name: " << MyClass::name << endl;
    cout << "ID: " << MyClass::id << endl;
    return 0;
}