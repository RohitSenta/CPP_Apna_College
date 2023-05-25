// Switch-Case Statement with Example of Hello in defferent language

#include<iostream>
using namespace std;

int main() {

    char button;
    cout << "Enter a Character : ";
    cin >> button;

    switch (button) {
        case 'a':
            cout << "Hello!";
            break;
        case 'b':
            cout << "Namaste!";
            break;
        case 'c':
            cout << "Salut!";
            break;
        case 'd':
            cout << "Hola!";
            break;
        case 'e':
            cout << "Ciao!";
            break;
        default:
            cout << "I am still learining more..!!!";
            break;
    }

    return 0;
}