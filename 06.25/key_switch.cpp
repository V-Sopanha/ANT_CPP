// #include<iostream>
// using namespace std;
// int main(){

//     char op;
//     op=getch();
//     cout<<"\n\n\t\t Enter Option : "; cin>>op;          fflush(stdin);cin.clear();

//     switch (op)
//     {
//     case 13:
//         cout<<"\n\n\t\t ENTER ";
//         break;
//     case 27: 
//         cout<<"\n\n\t\t ESC ";   
//         break;
    
//     default:
//         break;
//     }


//     return 0;
// }

#include <iostream>
#include <termios.h>
#include <unistd.h>

using namespace std;

// Custom getch() for macOS/Linux
char getch() {
    char buf = 0;
    struct termios old = {};
    tcgetattr(STDIN_FILENO, &old);
    old.c_lflag &= ~ICANON; // disable line buffering
    old.c_lflag &= ~ECHO;   // disable echo
    tcsetattr(STDIN_FILENO, TCSANOW, &old);
    read(STDIN_FILENO, &buf, 1);
    old.c_lflag |= ICANON;
    old.c_lflag |= ECHO;
    tcsetattr(STDIN_FILENO, TCSADRAIN, &old);
    return buf;
}

int main() {
    char op;

    cout << "\n\n\t\t Press a key: ";
    op = getch();

    switch (op) {
        case 13: // ENTER key
            cout << "\n\n\t\t ENTER ";
            break;
        case 27: // ESC key
            cout << "\n\n\t\t ESC ";
            break;
        default:
            cout << "\n\n\t\t You pressed: " << op;
            break;
    }

    return 0;
}
