#include <iostream>
using namespace std;

int main() {
    int liczby[10], najmniejsza;

    cout << "Podaj 10 liczb calkowitych:\n";
    for (int i = 0; i < 10; i++) {
        cin >> liczby[i];
    }

    najmniejsza = liczby[0];

    for (int i = 1; i < 10; i++) {
        if (liczby[i] < najmniejsza) {
            najmniejsza = liczby[i];
        }
    }

    cout << "Najmniejsza liczba: " << najmniejsza << endl;

    return 0;
}

