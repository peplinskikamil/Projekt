#include <iostream>
using namespace std;

int main() {
    int n, i = 2;
    cout << "Podaj N: ";
    cin >> n;

    while (i <= n) {
        cout << i << " ";
        i += 2;
    }
}

