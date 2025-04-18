#include <iostream>

int main()
{
    int matriz[3][3];
    int det = 0;

    std::cout << "Digite os elementos da matriz 3x3:\n";
    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            std::cout << "matriz[" << linha << "][" << coluna << "]: ";
            std::cin >> matriz[linha][coluna];
        }
    }

    det =
        (matriz[0][0] * matriz[1][1] * matriz[2][2]) +
        (matriz[0][1] * matriz[1][2] * matriz[2][0]) +
        (matriz[0][2] * matriz[1][0] * matriz[2][1]) -
        (matriz[0][2] * matriz[1][1] * matriz[2][0]) -
        (matriz[0][0] * matriz[1][2] * matriz[2][1]) -
        (matriz[0][1] * matriz[1][0] * matriz[2][2]);

    std::cout << "Determinante da matriz = " << det << std::endl;

    return 0;
}
