#include <iostream>
using namespace std;

int main() {
    int p;
    cout << "Punkty: ";
    cin >> p;

    if (p < 0 || p > 100) cout << "Błąd!\n";
    else if (p < 50) cout << "Niedostateczna\n";
    else if (p < 70) cout << "Dostateczna\n";
    else if (p < 85) cout << "Dobra\n";
    else if (p < 100) cout << "Bardzo dobra\n";
    else cout << "Celująca\n";
}

