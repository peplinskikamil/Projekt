#include <iostream>
using namespace std;

int main() {
    int liczby[5], suma = 0;
    
    cout << "Podaj 5 liczb:\n";
    int i = 0;
    while (i < 5) {
        cin >> liczby[i];
        suma += liczby[i];
        i++;
    }

    double srednia = suma / 5.0;
    
    cout << "Srednia: " << srednia << endl;
    
    return 0;
}

