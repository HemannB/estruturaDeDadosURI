/*Criar struct, criar procedimento para exibir usuario*/
#include <iostream>

struct Usuario
{
    std::string nome;
    int idade;
    double altura;
    bool gostaDeCafe;
};

void lerDadosUsuario(Usuario &u)
{
    char resposta;
    std::cout << "Digite seu nome: ";
    std::cin >> u.nome;

    std::cout << "Digite sua idade: ";
    std::cin >> u.idade;

    std::cout << "Digite sua altura: ";
    std::cin >> u.altura;

    std::cout << "Gosta de café? S para Sim, N para Não: ";
    std::cin >> resposta;

    u.gostaDeCafe = (resposta == 's' || resposta == 'S');
}

void mostraDadosUsuario(Usuario &u)
{
    std::cout << u.nome << " tem " << u.idade << " ano(s), " << u.altura << "m e " << (!u.gostaDeCafe ? "não " : "") << "gosta de café." << std::endl;
}

int main()
{
    Usuario p;
    lerDadosUsuario(p);
    mostraDadosUsuario(p);

    return 0;
}