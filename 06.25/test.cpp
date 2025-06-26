#include <iostream>
#include <unistd.h> // for sleep()

using namespace std;

int main() {
    cout << "Waiting for 3 seconds...\n";
    sleep(3); // sleeps for 3 seconds
    cout << "Done!\n";
    return 0;
}
