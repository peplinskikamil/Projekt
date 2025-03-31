#include <iostream>
#include <string>
int main() {
    std::string imie;
    int wiek;
    std::cout << "Imie: ";
    std::getline(std::cin, imie);
    std::cout << "Wiek: ";
    std::cin >> wiek;
    std::cout << "Witaj, " << imie << "! Masz " << wiek << " lat.";
    return 0;
}
