#include "hora.hpp"

bool Horario::validarHora(int hora) {
    return hora >= 0 && hora <= 23;
}

bool Horario::validarMinuto(int minuto) {
    return minuto >= 0 && minuto <= 59;
}

bool Horario::setHora(int hora) {
    if (!validarHora(hora)) {
        return false;
    }
    this->hora = hora;
    return true;
}

bool Horario::setMinuto(int minuto) {
    if (!validarMinuto(minuto)) {
        return false;
    }
    this->minuto = minuto;
    return true;
}
