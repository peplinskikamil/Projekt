#include <iostream>
using namespace std;

int main() {
    int x;
    char c;

    do {
        cout << "Podaj liczb�: ";
        cin >> x;
        cout << "Wpisa�e�: " << x << "\n";
        cout << "Kontynuowa�? (t/n): ";
        cin >> c;
    } while (c == 't');
}

