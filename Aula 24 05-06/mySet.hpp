#ifndef SET_HPP
#define SET_HPP

#include <iostream>
#include <list>
#include <string>
#include <sstream>
#include <stdexcept>
#include <cmath>

template<typename T>
class Set {
private:
    static const int n = 101; 
    static const int a = 41;  
    std::list<T> tabela[n];
    int hash(const T& elemento) const;
public:
    Set() = default;
    ~Set() = default;
    void inserir(const T& elemento);
    void remover(const T& elemento);
    bool contem(const T& elemento) const;
    void mostrar(bool ordenar = false) const; 
    int tamanho() const;
    std::list<T> toList() const;
};
#include "mySet.cpp"

#endif