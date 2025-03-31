#include <iostream>
using namespace std;

int main() {
    int liczby[5];

    cout << "Podaj 5 liczb calkowitych:\n";
    for (int i = 0; i < 5; i++) {
        cin >> liczby[i];
        if (liczby[i] < 0) liczby[i] = 0;
    }

    cout << "Zmodyfikowana tablica:\n";
    for (int i = 0; i < 5; i++) {
        cout << liczby[i] << " ";
    }
    cout << endl;

    return 0;
}

