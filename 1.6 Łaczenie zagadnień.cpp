#include <iostream>
int main() {
    int a, b;
    std::cout << "Liczba 1: ";
    std::cin >> a;
    std::cout << "Liczba 2: ";
    std::cin >> b;
    int suma = a + b;
    std::cout << suma << "\n";
    if (suma % 2 == 0) std::cout << "Parzysta";
    else std::cout << "Nieparzysta";
    return 0;
}
