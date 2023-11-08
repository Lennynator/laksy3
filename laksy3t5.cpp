#include <iostream>

void kaanna(int* t, int n) {
    for (int i = 0; i < n / 2; ++i) {
        int temp = t[i];
        t[i] = t[n - 1 - i];
        t[n - 1 - i] = temp;
    }
}

void tulosta_arvot(const int* t, int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << t[i] << " ";
    }
    std::cout << std::endl;
}

void lue_arvot(int* t, int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << "Anna arvo taulukon indeksille " << i << ": ";
        std::cin >> t[i];
    }
}

int main() {
    int koko;

    std::cout << "Anna taulukon koko: ";
    std::cin >> koko;

    int* taulukko = new int[koko];

    lue_arvot(taulukko, koko);

    kaanna(taulukko, koko);

    std::cout << "Taulukko toisin pain: ";
    tulosta_arvot(taulukko, koko);

    delete[] taulukko;

    return 0;
}