#include <iostream>
int main() {
    int a, b;
    std::cout << "Liczba 1: ";
    std::cin >> a;
    std::cout << "Liczba 2: ";
    std::cin >> b;
    std::cout << a + b << "\n" << a - b << "\n" << a * b;
    if (b != 0) std::cout << "\n" << a / b << "\n" << a % b;
    return 0;
}
