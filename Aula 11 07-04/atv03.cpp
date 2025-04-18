#include <iostream>

int* redimensionarArray(int* antigo, std::size_t tamanhoAtual, std::size_t novaCapacidade) {
    int* novo = new int[novaCapacidade];
    for (std::size_t i = 0; i < tamanhoAtual; ++i) {
        novo[i] = antigo[i];
    }
    delete[] antigo;
    return novo;
}

void lerNumeros(int*& numeros, std::size_t& quantidade) {
    std::size_t capacidade = 5;
    quantidade = 0;
    numeros = new int[capacidade];

    int valor = -1;
    while (valor != 0) {
        std::cout << "Digite um número (0 para sair): ";
        std::cin >> valor;

        if (quantidade == capacidade) {
            capacidade *= 2;
            numeros = redimensionarArray(numeros, quantidade, capacidade);
        }

        numeros[quantidade++] = valor;
    }
}

void mostrarNumeros(const int* numeros, std::size_t quantidade) {
    std::cout << "\nVocê digitou:\n";
    for (std::size_t i = 0; i < quantidade; ++i) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int* numeros = nullptr;
    std::size_t quantidade = 0;

    lerNumeros(numeros, quantidade);
    mostrarNumeros(numeros, quantidade);

    delete[] numeros;
    return 0;
}
