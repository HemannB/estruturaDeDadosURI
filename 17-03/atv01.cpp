#include <iostream>
#include <cstdlib>
#include <unistd.h>

int main() {
    int num;

    while (true) {
        std::cout << "Digite um numero: ";
        std::cin >> num;

        if (num < 0) {
            std::cout << "Numero invalido!" << std::endl;
            continue;
        }

        if (num == 0) {
            return 0;
        }

        for (int i = num; i > 0; i--) {
            std::cout << i << "\n\n";
            sleep(1);
        }
        std::cout <<"Digite 0 (zero) para sair:"<<std::endl;
        std::cout <<"Ou"<<std::endl;
    }
}
