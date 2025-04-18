#include <iostream>
#include <string>
#include <sstream>


template<typename T>
void lerNumero(T& valor) {
    std::string entrada;

    while (true) {
        std::cout << "Digite um número: ";
        std::getline(std::cin, entrada); 

        std::stringstream ss(entrada);
        T temp;

        if (ss >> temp && ss.eof()) {
            valor = temp;
            break;
        } else {
            std::cout << "Valor inválido: \"" << entrada << "\" não é um número." << std::endl;
        }
    }
}

int main() {
    int numero;
    lerNumero(numero);

    std::cout << "Você digitou " << numero << "." << std::endl;
    return 0;
}
