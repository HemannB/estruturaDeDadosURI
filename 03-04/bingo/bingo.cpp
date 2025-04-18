#include <iostream>
#include <iomanip>
#include <ctime>

const int TAMANHO = 10;
const int TOTAL_NUMEROS = TAMANHO * TAMANHO;

class Bingo
{
private:
    int tabuleiro[TAMANHO][TAMANHO];
    int numerosGerados[TOTAL_NUMEROS];
    int quantidadeGerados;

public:
    Bingo()
    {
        std::srand(std::time(0));
        quantidadeGerados = 0;
        gerarNumerosUnicos();
        preencherTabuleiro();
    }

    bool numeroJaFoiGerado(int numero)
    {
        for (int i = 0; i < quantidadeGerados; ++i)
        {
            if (numerosGerados[i] == numero)
            {
                return true;
            }
        }
        return false;
    }

    void gerarNumerosUnicos()
    {
        while (quantidadeGerados < TOTAL_NUMEROS)
        {
            int aleatorio = std::rand() % TOTAL_NUMEROS;
            if (!numeroJaFoiGerado(aleatorio))
            {
                numerosGerados[quantidadeGerados] = aleatorio;
                ++quantidadeGerados;
            }
        }
    }

    void preencherTabuleiro()
    {
        int indice = 0;
        for (int linha = 0; linha < TAMANHO; ++linha)
        {
            for (int coluna = 0; coluna < TAMANHO; ++coluna)
            {
                tabuleiro[linha][coluna] = numerosGerados[indice];
                ++indice;
            }
        }
    }

    void imprimirTabuleiro()
    {
        std::cout << "Bingo 10x10:" << std::endl;
        for (int linha = 0; linha < TAMANHO; ++linha)
        {
            for (int coluna = 0; coluna < TAMANHO; ++coluna)
            {
                std::cout << std::setfill('0') << std::setw(2) << tabuleiro[linha][coluna] << " ";
            }
            std::cout << std::endl;
        }
    }
};
