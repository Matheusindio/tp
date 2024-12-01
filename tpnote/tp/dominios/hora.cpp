#include "hora.hpp"

bool Horario::validarHorario(std::string horario) {
    int hora;
    int minuto;
    std::sscanf(horario.c_str(), "%2d:%2d", &hora, &minuto);
    if(hora >= 0 && hora <= 23)
    {
        if(minuto >= 0 && minuto <=59)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
    
}

bool Horario::setHorario(std::string horario) {
    if (!validarHorario(horario)) {
        return false;
    }
    this->horario = horario;
    return true;
}

