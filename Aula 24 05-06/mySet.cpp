#ifndef SET_CPP
#define SET_CPP

#include "mySet.hpp"
#include <algorithm> 

template<typename T>
int Set<T>::hash(const T& elemento) const {
    std::stringstream ss;
    ss << elemento;
    std::string str = ss.str();

    unsigned long hashValue = 0;
    int exp = str.length() - 1;

    for (char c : str) {
        hashValue += static_cast<unsigned long>(static_cast<int>(c) * std::pow(a, exp));
        exp--;
    }
    return hashValue % n;
}

template<typename T>
void Set<T>::inserir(const T& elemento) {
    int indice = hash(elemento);

    for (const auto& item : tabela[indice]) {
        if (item == elemento) {
            return; 
        }
    }
    tabela[indice].push_back(elemento); 
}

template<typename T>
void Set<T>::remover(const T& elemento) {
    int indice = hash(elemento);

    for (auto it = tabela[indice].begin(); it != tabela[indice].end(); ++it) {
        if (*it == elemento) {
            tabela[indice].erase(it);
            return;
        }
    }
    throw std::runtime_error("Elemento não encontrado para remover.");
}

template<typename T>
bool Set<T>::contem(const T& elemento) const {
    int indice = hash(elemento);

    for (const auto& item : tabela[indice]) {
        if (item == elemento) {
            return true;
        }
    }
    return false;
}

template<typename T>
void Set<T>::mostrar(bool ordenar) const { 
    const int MAX_ELEMENTOS = 500; 
    T elementos[MAX_ELEMENTOS];
    int count = 0;

    for (int i = 0; i < n; ++i) {
        for (const auto& elemento : tabela[i]) {
            if (count < MAX_ELEMENTOS) {
                elementos[count++] = elemento;
            } else {
            }
        }
    }

    if (ordenar) {
        for (int i = 0; i < count - 1; ++i) {
            for (int j = i + 1; j < count; ++j) {
                if (elementos[i] > elementos[j]) { 
                    T temp = elementos[i];
                    elementos[i] = elementos[j];
                    elementos[j] = temp;
                }
            }
        }
    }

    for (int i = 0; i < count; ++i) {
        std::cout << elementos[i] << std::endl;
    }
}

template<typename T>
int Set<T>::tamanho() const {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        count += tabela[i].size();
    }
    return count;
}

template<typename T>
std::list<T> Set<T>::toList() const {
    std::list<T> listaResultado;
    for (int i = 0; i < n; ++i) {
        for (const auto& elemento : tabela[i]) {
            listaResultado.push_back(elemento);
        }
    }
    return listaResultado;
}

#endif