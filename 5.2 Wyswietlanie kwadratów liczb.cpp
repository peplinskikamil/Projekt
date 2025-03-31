#include <iostream>  

int main() {  
    int N;  

    std::cout << "Podaj liczbe calkowita N: ";  
    std::cin >> N;  

    for (int i = 1; i <= N; i++) {  
        std::cout << "Kwadrat " << i << " = " << i * i << std::endl;  
    }  

    return 0;  
}

