#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Liczba: ";
    cin >> x;

    if (x % 2 == 0) cout << "Parzysta, ";
    else cout << "Nieparzysta, ";

    if (x % 3 == 0) cout << "podzielna przez 3\n";
    else cout << "niepodzielna przez 3\n";
}

