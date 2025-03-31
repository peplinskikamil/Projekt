#include <iostream>
using namespace std;

int main() {
    int liczby[10], suma = 0;

    cout << "Podaj 10 liczb calkowitych:\n";
    for (int i = 0; i < 10; i++) {
        cin >> liczby[i];
    }

    cout << "Liczby parzyste: ";
    bool pierwsza = true;
    
    for (int i = 0; i < 10; i++) {
        if (liczby[i] % 2 == 0) {
            if (!pierwsza) {
                cout << ", ";
            }
            cout << liczby[i];
            suma += liczby[i];
            pierwsza = false;
        }
    }

    cout << endl << "Suma liczb parzystych: " << suma << endl;

    return 0;
}

