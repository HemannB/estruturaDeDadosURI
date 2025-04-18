#include <iostream>
#include <stack>

void empilharNumeros(std::stack<int>& pilha) {
    int valor;

    do {
        std::cout << "Digite um número (0 para parar): ";
        std::cin >> valor;
        pilha.push(valor);
    } while (valor != 0);
}

void mostrarPilha(std::stack<int> pilha) {
    std::cout << "\nResultado:\n";
    while (!pilha.empty()) {
        std::cout << pilha.top() << " ";
        pilha.pop();
    }
    std::cout << std::endl;
}

int main() {
    std::stack<int> pilha;

    empilharNumeros(pilha);
    mostrarPilha(pilha);

    return 0;
}
