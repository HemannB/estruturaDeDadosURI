#include <iostream>
#define CANTO_ESQ "\u2554"
#define CANTO_DIR "\u2557"
#define CANTO_INF_ESQ "\u255A"
#define CANTO_INF_DIR "\u255D"
#define LADO "\u2551"
#define CIMA_BAIXO "\u2550"
#define QUADRADO "\u25A1"

void desenharQuadrado(int lado)
{
    if (lado < 1)
    {
        std::cout << "Digite apenas números inteiros maiores que 0";
        exit(0);
    }
    else if (lado == 1)
    {
        std::cout<<"25A1: " << QUADRADO;
    }
    else
    {
        std::cout << CANTO_ESQ;
        for (int i = 2; i < lado; i++)
        {
            std::cout << CIMA_BAIXO;
        }
        std::cout << CANTO_DIR << std::endl;

        for (int i = 2; i < lado; i++)
        {
            std::cout << LADO;
            for (int j = 2; j < lado; j++)
            {
                std::cout << " ";
            }
            std::cout << LADO << std::endl;
        }

        std::cout << CANTO_INF_ESQ;
        for (int i = 2; i < lado; i++)
        {
            std::cout << CIMA_BAIXO;
        }
        std::cout << CANTO_INF_DIR << std::endl;
    }
}

int main()
{
    int lado;
    std::cout << "Digite o tamanho do lado do quadrado: ";
    std::cin >> lado;
    desenharQuadrado(lado);
    return 0;
}