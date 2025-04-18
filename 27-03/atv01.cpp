#include <iostream>

enum class Mes
{
    JANEIRO = 1,
    FEVEREIRO,
    MARCO,
    ABRIL,
    MAIO,
    JUNHO,
    JULHO,
    AGOSTO,
    SETEMBRO,
    OUTUBRO,
    NOVEMBRO,
    DEZEMBRO
};

std::string getNomeMes(int numero)
{
    if (numero < 1 || numero > 12)
    {
        return "Número inválido! Digite um valor entre 1 e 12.";
    }

    Mes mes = (Mes)numero;

    switch (mes)
    {
    case Mes::JANEIRO:
        return "Janeiro";
    case Mes::FEVEREIRO:
        return "Fevereiro";
    case Mes::MARCO:
        return "Março";
    case Mes::ABRIL:
        return "Abril";
    case Mes::MAIO:
        return "Maio";
    case Mes::JUNHO:
        return "Junho";
    case Mes::JULHO:
        return "Julho";
    case Mes::AGOSTO:
        return "Agosto";
    case Mes::SETEMBRO:
        return "Setembro";
    case Mes::OUTUBRO:
        return "Outubro";
    case Mes::NOVEMBRO:
        return "Novembro";
    case Mes::DEZEMBRO:
        return "Dezembro";
    default:
        return "Mês desconhecido";
    }
}

int main()
{
    int numeroMes;
    std::cout << "Digite o número do mês: ";
    std::cin >> numeroMes;

    std::string nome = getNomeMes(numeroMes);
    std::cout << "O nome do mês é: " << nome << std::endl;

    return 0;
}
