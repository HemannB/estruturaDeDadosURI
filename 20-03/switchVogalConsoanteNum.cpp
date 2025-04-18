#include <iostream>

int main()
{
    char c;

    std::cout << "Digite um caractere: ";
    std::cin >> c;

    if (c >= 'A' && c <= 'Z')
    {
        c = c + 32;
    }

    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        std::cout << "Vogal" << std::endl;
        break;

    case '0' ... '9':
        std::cout << "Número" << std::endl;
        break;

    default:
        std::cout << "Consoante" << std::endl;
    }

    return 0;
}
