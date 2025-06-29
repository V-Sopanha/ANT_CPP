#include <iostream>
using namespace std;
int main() {

    int n = 0;
    for (int r = 1; r <= 3; r++) { 
        for (int i = 1; i <= 12 ; i++) {
            for (int j = 1; j <= 4; j++) {
                int x = n * 4 + j;
                cout << x << " x " << i << " = " << i * x << "\t" ;
            }
            cout << "\n";
        }
        cout << "\n";
        cout << "===========================================================\n\n";
        ++n;
    }

    return 0;
}
