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
            throw std::invalid_argument("Horario incorreto.");
        }
    }
    else
    {
            throw std::invalid_argument("Horario incorreto.");
    }
    
}

bool Horario::setHorario(std::string horario) {
    validarHorario(horario);
    this->horario = horario;
    return true;
}

