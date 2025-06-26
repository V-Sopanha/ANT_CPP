#include <iostream>
#include <limits> // for cin.ignore()

using namespace std;

int main() {
    int n;

start:
    cout << "\n\nEnter any number: ";cin >> n;  fflush(stdin);cin.clear();


    switch (n) {
        case 1:
            cout << "\n\n\t\t1";
            break;
        case 2:
            cout << "2";
            break;
        default:
            cout << "Please enter number from 1 to 2";
            break;
    }

    cout << "\nPress Enter to continue...";
    cin.get(); // wait for Enter key

    system("clear"); // clears terminal on Mac/Linux
    goto start;

    return 0;
}
