#include <iostream>

void lue_arvot(int* t, int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << "Syötä kokonaisluku taulukon indeksille " << i << ": ";
        std::cin >> t[i];
    }
}

int main() {
    int koko = 5; 
    int* taulukko = new int[koko]; 

    lue_arvot(taulukko, koko); 

    std::cout << "Taulukon arvot: ";
    for (int i = 0; i < koko; ++i) {
        std::cout << taulukko[i] << " ";
    }
    std::cout << std::endl;

    delete[] taulukko; 

    return 0;
}







