#ifndef DESTINO_HPP_INCLUDED
#define DESTINO_HPP_INCLUDED
#include "../dominios/nome.hpp"
#include "../dominios/avaliacao.hpp"
#include "../dominios/codigo.hpp"
#include "../dominios/data.hpp"
#include <stdexcept> // Para exceções
using namespace std;

class Destino {
 private:
    Codigo code;                            
    Nome name;                              
    Avaliacao avaliation;       
    Data datainit;
    Data datafim;


    bool validarDatas(const Data& datainit, const Data& datafim);

 public:

    void setCode(const Codigo& code);
    Codigo getCode() const;

    void setName(const Nome& name);
    Nome getName() const;

    void setAvaliation(const Avaliacao& avaliation);
    Avaliacao getAvaliation() const;

    void setDatas(const Data& datainit, const Data& datafim);
    Data getDatainit() const;
    Data getDatafim() const;
};


inline void Destino::setCode(const Codigo& code) {
    this->code = code;
}

inline Codigo Destino::getCode() const {
    return code;
}

inline void Destino::setAvaliation(const Avaliacao& avaliation) {
    this->avaliation = avaliation;
}

inline Avaliacao Destino::getAvaliation() const {
    return avaliation;
}

inline void Destino::setName(const Nome& name) {
    this->name = name;
}

inline Nome Destino::getName() const {
    return name;
}

inline Data Destino::getDatainit() const {
    return datainit;
}

inline Data Destino::getDatafim() const {
    return datafim;
}

inline void Destino::setDatas(const Data& datainit, const Data& datafim) {
    if (!validarDatas(datainit, datafim)) {
        throw std::invalid_argument("Erro ao inserir as datas: data inicial é posterior à data final.");
    }
    this->datainit = datainit;
    this->datafim = datafim;
}


inline bool Destino::validarDatas(const Data& datainit, const Data& datafim) {
    if (datainit.getAno() > datafim.getAno()) {
        return false;
    }
    if (datainit.getAno() == datafim.getAno() && datainit.getMes() > datafim.getMes()) {
        return false;
    }
    if (datainit.getAno() == datafim.getAno() && datainit.getMes() == datafim.getMes() && datainit.getDia() > datafim.getDia()) {
        return false;
    }
    return true;
}

#endif
