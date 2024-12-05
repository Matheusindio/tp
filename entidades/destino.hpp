#ifndef DESTINO_HPP_INCLUDED
#define DESTINO_HPP_INCLUDED
#include "../dominios/nome.hpp"
#include "../dominios/avaliacao.hpp"
#include "../dominios/codigo.hpp"
#include "../dominios/data.hpp"
#include <stdexcept> 
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

    bool setDatas(const Data& datainit, const Data& datafim);
    Data getDatainit() const;
    Data getDatafim() const;
    Data getDatas() const;
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

inline bool Destino::setDatas(const Data& datainit, const Data& datafim) {
    validarDatas(datainit, datafim);
    this->datainit = datainit;
    this->datafim = datafim;
    return true;
}


inline bool Destino::validarDatas(const Data& datainit, const Data& datafim) {
        if(datainit.getAno() > datafim.getAno()) {
        throw std::invalid_argument("Data Inicial sucede Data Final :: Destino");}
        else if(datainit.getAno() == datafim.getAno() && datainit.getMes() > datafim.getMes()){
        throw std::invalid_argument("Data Inicial sucede Data Final :: Destino");}
        else if (datainit.getAno() == datafim.getAno() && datainit.getMes() == datafim.getMes() && datainit.getDia() > datafim.getDia()) {
        throw std::invalid_argument("Data Inicial sucede Data Final :: Destino");}

    return true;
}


#endif
