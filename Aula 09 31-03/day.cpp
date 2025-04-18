#include "includes/day.h"
#include <iostream>

Days::Days(int day, int month) : day_(day), month_(month), signo_("Desconhecido") {}

Days::~Days() {}

void Days::DescobreSigno() {
    signo_ = DeterminarSigno();
}

std::string Days::DeterminarSigno() const {
    switch (month_) {
        case 1:  return (day_ <= 19) ? "Capricórnio" : "Aquário";
        case 2:  return (day_ <= 18) ? "Aquário"     : "Peixes";
        case 3:  return (day_ <= 20) ? "Peixes"      : "Áries";
        case 4:  return (day_ <= 19) ? "Áries"       : "Touro";
        case 5:  return (day_ <= 20) ? "Touro"       : "Gêmeos";
        case 6:  return (day_ <= 20) ? "Gêmeos"      : "Câncer";
        case 7:  return (day_ <= 22) ? "Câncer"      : "Leão";
        case 8:  return (day_ <= 22) ? "Leão"        : "Virgem";
        case 9:  return (day_ <= 22) ? "Virgem"      : "Libra";
        case 10: return (day_ <= 22) ? "Libra"       : "Escorpião";
        case 11: return (day_ <= 21) ? "Escorpião"   : "Sagitário";
        case 12: return (day_ <= 21) ? "Sagitário"   : "Capricórnio";
        default: return "Desconhecido";
    }
}

void Days::MostraSigno() const {
    std::cout << "O signo correspondente à data " << day_ << "/" << month_ << " é: " << signo_ << std::endl;
}
