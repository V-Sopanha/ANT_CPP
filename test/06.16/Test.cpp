#include <iostream>
#include <unistd.h> // for sleep() on Unix-like systems (macOS, Linux)

using namespace std;

int main() {
    cout << "Hello ";   cout.flush();
    sleep(5); // Sleep for 2 seconds
    cout << "World!" << endl;
    return 0;
}
