#include <iostream>

int main()
{
    int month, year, days = 0;
    std::string monthName;

    std::cout << "Digite o número do mês: ";
    std::cin >> month;
    std::cout << "Digite o ano: ";
    std::cin >> year;

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        days = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        days = 30;
        break;
    case 2:
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            days = 29;
        else
            days = 28;
        break;
    default:
        std::cout << "Mês inválido!" << std::endl;
        return 1;
    }

    switch (month)
    {
    case 1:
        monthName = "Janeiro";
        break;
    case 2:
        monthName = "Fevereiro";
        break;
    case 3:
        monthName = "Março";
        break;
    case 4:
        monthName = "Abril";
        break;
    case 5:
        monthName = "Maio";
        break;
    case 6:
        monthName = "Junho";
        break;
    case 7:
        monthName = "Julho";
        break;
    case 8:
        monthName = "Agosto";
        break;
    case 9:
        monthName = "Setembro";
        break;
    case 10:
        monthName = "Outubro";
        break;
    case 11:
        monthName = "Novembro";
        break;
    case 12:
        monthName = "Dezembro";
        break;
    }

    std::cout << monthName << " - "<< days << " dias."<<std::endl;

    return 0;
}
