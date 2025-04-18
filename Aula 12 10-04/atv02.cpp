/*duas variaveis mostrar trocas usando procedimento+template+ponteiros/referencias*/
#include <iostream>

template <typename Tipo>
void trocarValores(Tipo& primeiroValor, Tipo& segundoValor) {
    Tipo valorTemporario = primeiroValor;
    primeiroValor = segundoValor;
    segundoValor = valorTemporario;
}

int main() {
    char letra1, letra2;

    std::cout << "Digite a primeira letra: ";
    std::cin >> letra1;

    std::cout << "Digite a segunda letra: ";
    std::cin >> letra2;

    std::cout << "\nAntes da troca:\n";
    std::cout << "Letra 1 = " << letra1 << "\n";
    std::cout << "Letra 2 = " << letra2 << "\n";

    trocarValores(letra1, letra2);

    std::cout << "\nDepois da troca:\n";
    std::cout << "Letra 1 = " << letra1 << "\n";
    std::cout << "Letra 2 = " << letra2 << "\n";

    return 0;
}
