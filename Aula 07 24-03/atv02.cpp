#include <iostream>

long potencia(long base, int expoente)
{
    long resultado = 1;
    for (int i = 0; i < expoente; i++)
    {
        resultado *= base;
    }
    return resultado;
}

long raizIndice(long numero, int indice)
{
    if (indice <= 0)
    {
        std::cout << "O índice deve ser maior que zero." << std::endl;
        return -1;
    }

    if (numero < 0 && indice % 2 == 0)
    {
        std::cout << "Raiz de índice par de número negativo não é permitida." << std::endl;
        return -1;
    }

    long raiz = 1;

    while (potencia(raiz, indice) <= numero)
    {
        raiz++;
    }

    return raiz - 1;
}

int main()
{
    long numero;
    int indice;
    std::cout << "Digite um número: ";
    std::cin >> numero;
    std::cout << "Digite um índice: ";
    std::cin >> indice;
    long resultado = raizIndice(numero, indice);

    if (resultado != -1)
    {
        std::cout << resultado << std::endl;
    }

    return 0;
}