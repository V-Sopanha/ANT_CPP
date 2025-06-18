#include <iostream>
#include <variant>
#include <string>

using namespace std;

using MyType = variant<int, float, string>;

void print(const MyType& value) {
    visit([](auto&& arg) {
        cout << "Value: " << arg << endl;
    }, value);
}

int main() {
    MyType a = 42;
    MyType b = 3.14f;
    MyType c = string("Hello");

    print(a);
    print(b);
    print(c);

    return 0;
}
//g++ -std=c++17 test1.cpp -o test1 && ./test1
