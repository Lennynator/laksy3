#include <iostream>

void tulosta_arvot(const int* t, int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << t[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int koko = 5; 
    int taulukko[] = { 1, 2, 3, 4, 5 }; 

    std::cout << "Taulukon arvot: ";
    tulosta_arvot(taulukko, koko); 

    return 0;
}