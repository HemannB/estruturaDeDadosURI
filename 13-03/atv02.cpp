#include <iostream>

int main() {
    double a, b;
    char operacao;

    std::cout << "Digite dois numeros: ";
    std::cin >> a >> b;

    std::cout << "Digite a operacao (+, -, x, /): ";
    std::cin >> operacao;

    std::cout << "Resultado: ";

    if (operacao == '+') {
        std::cout << (a + b) << std::endl;
    } else if (operacao == '-') {
        std::cout << (a - b) << std::endl;
    } else if (operacao == 'x') {
        std::cout << (a * b) << std::endl;
    } else if (operacao == '/') {
        if (b != 0)
            std::cout << (a / b) << std::endl;
        else
            std::cout << "Erro: divisao por zero!" << std::endl;
    } else {
        std::cout << "Operacao invalida!" << std::endl;
    }

    return 0;
}
