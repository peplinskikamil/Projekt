#include <iostream>
using namespace std;

int main() {
    int n, i = 1, p = 0;
    cout << "Podaj N: ";
    cin >> n;

    do {
        if (i % 2 == 0) p++;
    } while (++i <= n);

    cout << "Liczb parzystych: " << p << "\n";
}

