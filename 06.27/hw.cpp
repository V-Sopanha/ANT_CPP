#include <iostream>
using namespace std;

int main() {
    
    for (int r = 0; r < 3; r++) { 
        for (int i = 1; i <= 12; i++) {
            for (int c = 1; c <= 4; c++) { 
                int num = r * 4 + c;
                cout << num << " x " << i << " = " << num * i << "\t";
            }
            cout << "\n";
        }
        cout << "\n";
    }

    return 0;
}
