#include <iostream>
using namespace std;

int main() {
    int x;
    char c;

    do {
        cout << "Podaj liczbê: ";
        cin >> x;
        cout << "Wpisa³eœ: " << x << "\n";
        cout << "Kontynuowaæ? (t/n): ";
        cin >> c;
    } while (c == 't');
}

