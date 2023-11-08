#include <iostream>

void kaanna(int* t, int n) {
    for (int i = 0; i < n / 2; ++i) {
        int temp = t[i];
        t[i] = t[n - 1 - i];
        t[n - 1 - i] = temp;
    }
}

int main() {
    int koko = 5; 
    int taulukko[] = { 1, 2, 3, 4, 5 }; 

    std::cout << "Alkuperainen taulukko: ";
    for (int i = 0; i < koko; ++i) {
        std::cout << taulukko[i] << " ";
    }
    std::cout << std::endl;

    kaanna(taulukko, koko); 

    std::cout << "Kaannetty taulukko: ";
    for (int i = 0; i < koko; ++i) {
        std::cout << taulukko[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}