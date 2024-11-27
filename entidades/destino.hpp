#ifndef DESTINO_HPP_INCLUDED
#define DESTINO_HPP_INCLUDED
#include "../dominios/nome.hpp"
#include "../dominios/avaliacao.hpp"
#include "../dominios/codigo.hpp"
#include "../dominios/data.hpp"
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
 void setDatainit(const Data& datainit, const Data& datafim);
 Data getDatainit() const;
 void setDatafim(const Data& datainit, const Data& datafim);
 Data getDatafim() const;
};

inline void Destino::setCode(const Codigo &code){
 this->code = code;
}
inline Codigo Destino::getCode() const{
 return code;
}

inline void Destino::setAvaliation(const Avaliacao &avaliation){
 this->avaliation = avaliation;
}
inline Avaliacao Destino::getAvaliation() const{
 return avaliation;
}

inline void Destino::setName(const Nome &name){
 this->name = name;
}
inline Nome Destino::getName() const{
 return name;
}

inline bool Destino::setDatainit(const Data& datainit, const Data& datafim) {
    if (!validarDatas(datainit, datafim)) {
        cout << "errado";
        return false;
    }
        this->datainit = datainit;
        return true;

}
inline Data Destino::getDatainit() const{
 return datainit;
}

inline bool Destino::setDatafim(const Data& datainit, const Data& datafim) {
    if (!validarDatas(datainit, datafim)) {
        cout << "errado";
        return false;
    }
        this->datafim = datafim;
        return true;

}

inline Data Destino::getDatafim() const{
 return datafim;
}


#endif