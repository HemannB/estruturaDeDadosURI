#include <iostream>
#include <limits>
int main() {
    std::string nome;
    int idade;
    float altura;
    bool gosta_de_cafe = false;
	char resposta;
		
    std::cout << "Digite seu nome: ";
    std::cin >> nome;

    std::cout << "Digite sua idade: ";
    std::cin >> idade;

    std::cout << "Digite sua altura: ";
    std::cin >> altura;

	std::cout << "Gosta de café? S para Sim, N para Não: ";
	std::cin >> resposta;
	
	if(resposta == 's' || resposta == 'S'){ gosta_de_cafe = true;}
	

    std::cout << nome << " tem " << idade << " ano(s), " << altura << "m e " 
         << (!gosta_de_cafe ? "não " : "")<< "gosta de café" << std::endl;

    return 0;
}
