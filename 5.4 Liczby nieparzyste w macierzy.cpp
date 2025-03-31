#include <iostream>  

int main() {  
    int wiersze, kolumny;  

    std::cout << "Podaj liczbe wierszy: ";  
    std::cin >> wiersze;  
    std::cout << "Podaj liczbe kolumn: ";  
    std::cin >> kolumny;  

    int liczba = 1;  

    for (int i = 0; i < wiersze; i++) {  
        for (int j = 0; j < kolumny; j++) {  
            std::cout << liczba << "\t";  
            liczba += 2;  
        }  
        std::cout << std::endl;  
    }  

    return 0;  
}

