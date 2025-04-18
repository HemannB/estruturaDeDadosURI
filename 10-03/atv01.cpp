#include <iostream>
#include <iomanip>

int main()
{
    int number;
    std::cout << "Digite um numero: ";
    std::cin >> number;

    std::cout << "Você digitou: "
              << std::dec << number << " / 0x"
              << std::uppercase << std::hex << std::setw(2) << std::setfill('0') << number << " / 0"
              << std::oct << std::setw(2) << std::setfill('0') << number << std::endl;

    return 0;
}