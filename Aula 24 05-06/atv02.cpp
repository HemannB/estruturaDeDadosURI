#include <iostream>
#include <list>    
#include <cstdlib>  
#include <ctime>    
#include "mySet.hpp" 

template<typename T>
void embaralharLista(std::list<T>& lista) {
    if (lista.empty() || lista.size() == 1) {
        return; 
    }
    T* tempArray = new T[lista.size()];
    int k = 0;
    for (const T& item : lista) {
        tempArray[k++] = item;
    }
    int n_elements = lista.size();
    for (int i = n_elements - 1; i > 0; --i) {
        int j = rand() % (i + 1); 
        std::swap(tempArray[i], tempArray[j]); 
    }
    lista.clear();
    for (int i = 0; i < n_elements; ++i) {
        lista.push_back(tempArray[i]);
    }
    delete[] tempArray; 
}

int main() {
    Set<int> numerosBingo; 
    srand(static_cast<unsigned int>(time(NULL))); 
    for (int i = 0; i <= 99; ++i) {
        numerosBingo.inserir(i);
    }
    std::list<int> listaNumeros = numerosBingo.toList();
    embaralharLista(listaNumeros); 
    std::cout << "Resultado:" << std::endl; 
    int contador = 0;
    for (int numero : listaNumeros) {
        std::cout << (numero < 10 ? "0" : "") << numero << " ";
        contador++;
        if (contador % 10 == 0) {
            std::cout << std::endl;
        }
    }
    if (contador % 10 != 0) {
        std::cout << std::endl;
    }

    return 0;
}