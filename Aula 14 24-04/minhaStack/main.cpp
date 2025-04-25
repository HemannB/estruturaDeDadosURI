/*
*RESTRIÇÕES*
*NÃO USAR STD::VECTOR
*CRIAR UMA CLASSE STACK DO ZERO 
*/

#include <iostream>
#include "MyFuckingStack.h"

void enchePilha(MinhaPilha<int>& pilha) {
    int valor;
    do {
        std::cout << "Digite um número (0 para parar): ";
        std::cin >> valor;

        try {
            pilha.colocaNaPilha(valor);
        } catch (const std::overflow_error& e) {
            std::cout << e.what() << std::endl;
            break;
        }

    } while (valor != 0);
}

int main() {
    MinhaPilha<int> pilha(10);

    enchePilha(pilha);

    try {
        std::cout << "Topo da pilha: " << pilha.pontinhaDaPilha() << std::endl;
    } catch (const std::underflow_error& e) {
        std::cout << e.what() << std::endl;
    }

    pilha.mostrarPilha();

    return 0;
}

