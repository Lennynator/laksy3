#include <iostream>

const int koko = 5; 
int taulukko[koko]; 

void lue_arvot() {
    for (int i = 0; i < koko; ++i) {
        std::cout << "Anna arvo taulukon indeksille " << i << ": ";
        std::cin >> taulukko[i];
    }
}

void kaanna() {
    for (int i = 0; i < koko / 2; ++i) {
        int temp = taulukko[i];
        taulukko[i] = taulukko[koko - 1 - i];
        taulukko[koko - 1 - i] = temp;
    }
}

void tulosta_arvot() {
    for (int i = 0; i < koko; ++i) {
        std::cout << taulukko[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    lue_arvot();

    kaanna();

    std::cout << "Taulokko toisin pain: ";
    tulosta_arvot();

    return 0;
}

