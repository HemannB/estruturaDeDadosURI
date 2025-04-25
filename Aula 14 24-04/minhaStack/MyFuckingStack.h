#ifndef MYFUCKINGSTACK_H
#define MYFUCKINGSTACK_H

#include <iostream>
#include <stdexcept>

template <typename T>
class MinhaPilha {
private:
    T* dados;
    int topo;
    int capacidade;

public:
    MinhaPilha(int tamanho = 100);
    ~MinhaPilha();

    bool seraQueTaVazia() const;
    bool seraQueTaCheia() const;
    void colocaNaPilha(const T& valor);
    void tiraDaPilha();
    T pontinhaDaPilha() const;
    void mostrarPilha() const;
    int tamanhoAtual() const;
};

#include "MyFuckingStack.cpp"

#endif
