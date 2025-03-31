#include <iostream>
using namespace std;

int main() {
    float c;
    char u;

    cout << "Temp i jednostka (K/F): ";
    cin >> c >> u;

    switch (u) {
        case 'K': cout << "Kelvin: " << c + 273.15 << "\n"; break;
        case 'F': cout << "Fahrenheit: " << (c * 9 / 5) + 32 << "\n"; break;
        default: cout << "B³¹d: z³a jednostka!\n";
    }
}

