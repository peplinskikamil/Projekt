#include <iostream>
using namespace std;

int main() {
    float w, h;
    cout << "Waga (kg): ";
    cin >> w;
    cout << "Wzrost (m): ";
    cin >> h;

    float bmi = w / (h * h);
    cout << "BMI: " << bmi << "\n";

    if (bmi < 18.5) cout << "Niedowaga\n";
    else if (bmi < 25) cout << "W normie\n";
    else if (bmi < 30) cout << "Nadwaga\n";
    else cout << "Oty³oœæ\n";
}

