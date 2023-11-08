
#include <iostream>

int* varaa_taulukko(int n) {
    int* taulukko = new int[n]; 

    return taulukko; 
}

int main() {
    int koko = 8; 
    int* osoitin = varaa_taulukko(koko); 

    if (osoitin != nullptr) {
        for (int i = 0; i < koko; ++i) {
            osoitin[i] = i; 
        }

        for (int i = 0; i < koko; ++i) {
            std::cout << osoitin[i] << " ";
        }
        std::cout << std::endl;

        delete[] osoitin; 
    } else {
        std::cout << "Memory allocation failed." << std::endl;
    }

    return 0;
}