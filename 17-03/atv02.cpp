#include <iostream>

int main() {
    int num;

    do {
        std::cout << "Digite um numero maior ou igual a 2: ";
        std::cin >> num;

        if (num < 2) {
            std::cout << "Numero invalido! Tente novamente.\n";
        }
    } while (num < 2);

    std::cout << "Numeros primos de 2 ate " << num << ":\n";

    for (int i = 2; i <= num; i++) {
        bool primo = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                primo = false;
                break;
            }
        }
        if (primo) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
