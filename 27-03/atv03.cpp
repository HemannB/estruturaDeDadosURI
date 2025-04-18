/*união com inteiro e struct decode bit a bit e criar um procedimento para mostrar os bits no numero*/
#include <iostream>

// Struct com 32 bits individuais
struct Bits {
    unsigned int b0 : 1;
    unsigned int b1 : 1;
    unsigned int b2 : 1;
    unsigned int b3 : 1;
    unsigned int b4 : 1;
    unsigned int b5 : 1;
    unsigned int b6 : 1;
    unsigned int b7 : 1;

    unsigned int b8 : 1;
    unsigned int b9 : 1;
    unsigned int b10 : 1;
    unsigned int b11 : 1;
    unsigned int b12 : 1;
    unsigned int b13 : 1;
    unsigned int b14 : 1;
    unsigned int b15 : 1;

    unsigned int b16 : 1;
    unsigned int b17 : 1;
    unsigned int b18 : 1;
    unsigned int b19 : 1;
    unsigned int b20 : 1;
    unsigned int b21 : 1;
    unsigned int b22 : 1;
    unsigned int b23 : 1;

    unsigned int b24 : 1;
    unsigned int b25 : 1;
    unsigned int b26 : 1;
    unsigned int b27 : 1;
    unsigned int b28 : 1;
    unsigned int b29 : 1;
    unsigned int b30 : 1;
    unsigned int b31 : 1;
};

union InteiroBits {
    int inteiro;
    Bits bits;
};
void mostrarBits(int numero) {
    InteiroBits valor;
    valor.inteiro = numero;

    std::cout << "Bits de " << numero << ": ";
    std::cout << valor.bits.b31 << ","
              << valor.bits.b30 << ","
              << valor.bits.b29 << ","
              << valor.bits.b28 << ","
              << valor.bits.b27 << ","
              << valor.bits.b26 << ","
              << valor.bits.b25 << ","
              << valor.bits.b24 << ","
              << valor.bits.b23 << ","
              << valor.bits.b22 << ","
              << valor.bits.b21 << ","
              << valor.bits.b20 << ","
              << valor.bits.b19 << ","
              << valor.bits.b18 << ","
              << valor.bits.b17 << ","
              << valor.bits.b16 << ","
              << valor.bits.b15 << ","
              << valor.bits.b14 << ","
              << valor.bits.b13 << ","
              << valor.bits.b12 << ","
              << valor.bits.b11 << ","
              << valor.bits.b10 << ","
              << valor.bits.b9 << ","
              << valor.bits.b8 << ","
              << valor.bits.b7 << ","
              << valor.bits.b6 << ","
              << valor.bits.b5 << ","
              << valor.bits.b4 << ","
              << valor.bits.b3 << ","
              << valor.bits.b2 << ","
              << valor.bits.b1 << ","
              << valor.bits.b0 << std::endl;
}

int main() {
    int numero;

    std::cout << "Digite um número inteiro: ";
    std::cin >> numero;

    mostrarBits(numero);

    return 0;
}
