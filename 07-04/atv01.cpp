#include <iostream>

void trocaNumeros(int* a, int& b) {
    int aux = *a;
    *a = b;
    b = aux;
}

int main() {
    int num1, num2;
    std::cout << "Digite dois numeros inteiros:"<<std::endl;
    std::cin>>num1;
    std::cin>>num2;

    std::cout << "Antes da troca:"<<std::endl;
    std::cout << "Numero 1: " << num1 << std::endl;
    std::cout << "Numero 2: " << num2 << std::endl;

    trocaNumeros(&num1, num2); 

    std::cout << "Depois da troca:"<<std::endl;
    std::cout << "Numero 1: " << num1 << std::endl;
    std::cout << "Numero 2: " << num2 << std::endl;

    return 0;
}
