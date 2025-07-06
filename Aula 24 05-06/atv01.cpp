#include <iostream>
#include <string>
#include <algorithm> 
#include "mySet.hpp" 

int main() {
    Set<std::string> meuConjunto;

    meuConjunto.inserir("ana");
    
    meuConjunto.inserir("ash");
  
    meuConjunto.inserir("bob");

    meuConjunto.inserir("lau");

    meuConjunto.inserir("lua");

    meuConjunto.remover("bob");


    std::cout << "Resultado:" << std::endl;
    meuConjunto.mostrar(true);


    return 0;
}