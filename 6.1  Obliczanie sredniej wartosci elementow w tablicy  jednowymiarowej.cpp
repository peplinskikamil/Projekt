#include <iostream>
using namespace std;

int main() {
    int tablica[3][3], suma = 0;

    cout << "Podaj 9 liczb calkowitych:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> tablica[i][j];
            suma += tablica[i][j];
        }
    }

    double srednia = suma / 9.0;

    cout << "Srednia wynosi: " << srednia << endl;

    return 0;
}

