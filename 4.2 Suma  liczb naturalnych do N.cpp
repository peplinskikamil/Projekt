#include <iostream>
using namespace std;

int main() {
    int n, s = 0, i = 1;
    cout << "Podaj N: ";
    cin >> n;

    while (i <= n) s += i++;
    
    cout << "Suma: " << s << "\n";
}

