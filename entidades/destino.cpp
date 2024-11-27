#include "destino.hpp"

bool Destino::validarDatas(const Data& datainit, const Data& datafim)
{
    if (datainit.getAno() > datafim.getAno()) {
        return false;
    }
    if (datainit.getAno() == datafim.getAno()) {
        if (datainit.getMes() > datafim.getMes()) {
            return false;
        }
        if (datainit.getMes() == datafim.getMes()) {
            if (datainit.getDia() > datafim.getDia()) {
                return false;
            }
        }
    }
    return true; 

};


