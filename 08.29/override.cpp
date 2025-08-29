#include <iostream>
using namespace std;

class Animal {
public:
    // Base class function
    virtual void sound() {  // "virtual" enables overriding
        cout << "Some generic animal sound" << endl;
    }
    // virtual void sound() = 0;
};

class Dog : public Animal {
public:
    // Overriding base class function
    void sound() { // "override" (C++11) makes it clear we override
        cout << "Woof! Woof!" << endl;
    }
};

int main() {
    Animal* a;  
    Dog d;

    a = &d;

    a->sound();  // Calls Dog's version (runtime decision)
}
