#include <iostream>
using namespace std;

int main() {
    int n, s = 0;
    cout << "Podaj N: ";
    cin >> n;

    for (int i = 1; i <= n; s += i++);

    cout << "Suma: " << s << "\n";
}

