
#include<iostream>
#include "MyFuckingStack.h"

template <typename T>
MinhaPilha<T>::MinhaPilha(int tamanho) {
    capacidade = tamanho;
    topo = 0;
    dados = new T[capacidade];
}

template <typename T>
MinhaPilha<T>::~MinhaPilha() {
    delete[] dados;
}

template <typename T>
bool MinhaPilha<T>::seraQueTaVazia() const {
    return topo == 0;
}

template <typename T>
bool MinhaPilha<T>::seraQueTaCheia() const {
    return topo >= capacidade;
}

template <typename T>
void MinhaPilha<T>::colocaNaPilha(const T& valor) {
    if (seraQueTaCheia()) {
        throw std::overflow_error("Não tem mais espaço! A pilha tá cheia!");
    }
    dados[topo++] = valor;
}

template <typename T>
void MinhaPilha<T>::tiraDaPilha() {
    if (seraQueTaVazia()) {
        throw std::underflow_error("Não tem nada pra tirar, a pilha tá vazia!");
    }
    topo--;
}

template <typename T>
T MinhaPilha<T>::pontinhaDaPilha() const {
    if (seraQueTaVazia()) {
        throw std::underflow_error("A pilha tá vazia, não tem pontinha!");
    }
    return dados[topo - 1];
}

template <typename T>
void MinhaPilha<T>::mostrarPilha() const {
    std::cout << "\nConteúdo da pilha:\n";
    for (int i = topo - 1; i >= 0; i--) {
        std::cout << dados[i] << " ";
    }
    std::cout << std::endl;
}

template <typename T>
int MinhaPilha<T>::tamanhoAtual() const {
    return topo;
}
