#include <iostream>
#include <stack>
#include <string>

bool expressaoBemFormada(const std::string& expressao) {
    std::stack<char> pilha;

    for (char c : expressao) {
        if (c == '(' || c == '[' || c == '{') {
            pilha.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (pilha.empty()) return false;

            char topo = pilha.top();
            if ((c == ')' && topo != '(') ||
                (c == ']' && topo != '[') ||
                (c == '}' && topo != '{')) {
                return false;
            }

            pilha.pop();
        }
    }

    return pilha.empty();
}

int main() {
    std::string expressao;

    std::cout << "Digite uma expressão: ";
    std::getline(std::cin, expressao);

    if (expressaoBemFormada(expressao)) {
        std::cout << "Expressão bem formada!" << std::endl;
    } else {
        std::cout << "Expressão mal formada!" << std::endl;
    }

    return 0;
}
