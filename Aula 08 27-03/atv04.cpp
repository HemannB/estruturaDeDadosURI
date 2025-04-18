/*função(str) return enum, switch enum*/
#include <iostream>
#include <string>

enum TimeFutebol {
    CRUZEIRO,
    FLAMENGO,
    PALMEIRAS,
    GREMIO,
    ATLETICO_MINEIRO,
    DESCONHECIDO
};

TimeFutebol identificarTime(std::string nome) {

    for (int i = 0; i < nome.length(); i++) {
        if (nome[i] >= 'A' && nome[i] <= 'Z') {
            nome[i] += 32;
        }
    }

    if (nome == "cruzeiro") return CRUZEIRO;
    else if (nome == "flamengo") return FLAMENGO;
    else if (nome == "palmeiras") return PALMEIRAS;
    else if (nome == "gremio") return GREMIO;
    else if (nome == "atletico" || nome == "atletico mineiro") return ATLETICO_MINEIRO;
    else return DESCONHECIDO;
}

int main() {
    std::string nomeTime;

    std::cout << "Digite o nome do time de futebol: ";
    std::getline(std::cin, nomeTime);

    TimeFutebol time = identificarTime(nomeTime);

    switch (time) {
        case CRUZEIRO:
        case ATLETICO_MINEIRO:
            std::cout << "MG" << std::endl;
            break;
        case FLAMENGO:
            std::cout << "RJ" << std::endl;
            break;
        case PALMEIRAS:
            std::cout << "SP" << std::endl;
            break;
        case GREMIO:
            std::cout << "RS" << std::endl;
            break;
        default:
            std::cout << "?" << std::endl;
    }

    return 0;
}
