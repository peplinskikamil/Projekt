#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cout << "Liczby i znak: ";
    cin >> a >> op >> b;

    if (op == '+') cout << "Wynik: " << a + b << "\n";
    else if (op == '-') cout << "Wynik: " << a - b << "\n";
    else if (op == '*') cout << "Wynik: " << a * b << "\n";
    else if (op == '/') {
        if (b) cout << "Wynik: " << a / b << "\n";
        else cout << "B��d: dzielenie przez zero!\n";
    } else cout << "B��d: nieznana operacja!\n";
}

