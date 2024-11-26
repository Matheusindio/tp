#include "hora.hpp"

bool Horario::validarHora(int hora, int minuto) {
    return hora >= 0 && hora <= 23 && minuto >= 0 && minuto <= 59;
}

bool Horario::setHora(int hora, int minuto) {
    if (!validarHora(hora, minuto)) {
        return false;
    }
    this->hora = hora;
    this->minuto = minuto;
    return true;
}

