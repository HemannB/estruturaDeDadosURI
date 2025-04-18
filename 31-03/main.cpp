/*switch + if dentro de cada case, criar metódo para decodificar o signo a partir das propriedades da data(retornar o signo a partir da data)*/
#include "includes/day.h"
#include <iostream>

int main() {
    int dia, mes;

    std::cout << "Digite o dia:" << std::endl;
    std::cin >> dia;
    std::cout << "Digite o mes:" << std::endl;
    std::cin >> mes;

    Days d(dia, mes);
    d.DescobreSigno();
    d.MostraSigno();

    return 0;
}

