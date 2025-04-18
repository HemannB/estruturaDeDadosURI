#include <iostream>

bool jaExiste(int* numeros, int quantidade, int valor) {
    for (int indice = 0; indice < quantidade; indice++) {
        if (numeros[indice] == valor) {
            return true;
        }
    }
    return false;
}

int main() {
    int N;

    do {
        std::cout << "Digite a quantidade de numeros a serem lidos: ";
        std::cin >> N;
    } while (N < 0);

    int* numeros = new int[N];
    int quantidade = 0;

    while (quantidade < N) {
        int valor;
        std::cout << "Digite o numero " << (quantidade + 1) << "º: ";
        std::cin >> valor;

        if (jaExiste(numeros, quantidade, valor)) {
            std::cout << "Numero repetido! Digite outro.\n";
        } else {
            numeros[quantidade] = valor;
            quantidade++;
        }
    }

    
    std::cout << "Numeros lidos:\n";
    for (int i = 0; i < N; i++) {
        std::cout << numeros[i] << "\n";
    }

    delete[] numeros;

    return 0;
}
