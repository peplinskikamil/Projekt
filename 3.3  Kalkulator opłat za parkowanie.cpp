#include <iostream>
using namespace std;

int main() {
    int h, cena;
    char t;

    cout << "Godziny i typ pojazdu (S/M/A): ";
    cin >> h >> t;

    switch (t) {
        case 'S': cena = 5 * h; break;
        case 'M': cena = 3 * h; break;
        case 'A': cena = 10 * h; break;
        default: cout << "Błąd: zły typ pojazdu!\n"; return 0;
    }

    cout << "Opłata: " << cena << " zł\n";
}

