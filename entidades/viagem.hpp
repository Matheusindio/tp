#ifndef VIAGEM_HPP_INCLUDED
#define VIAGEM_HPP_INCLUDED
#include "../dominios/data.hpp"
using namespace std;


class Viagem {
 private:
 Codigo code;                              //entidade = Viagem
 Nome name;                              //Dominio = Data
 Avaliacao avaliation;                   //NomeAtributo = date
 public:
 void setCode(const Codigo& code);
 Codigo getCode() const;
 void setName(const Nome& name);
 Nome getName() const;
 void setAvaliation(const Avaliacao& avaliation);
 Avaliacao getAvalation() const;
 
};

inline void Viagem::setCode(const Codigo &code){
 this->code = code;
}
inline Codigo Viagem::getCode() const{
 return code;
}

inline void Viagem::setAvaliation(const Avaliacao &avaliation){
 this->avaliation = avaliation;
}
inline Avaliacao Viagem::getAvalation() const{
 return avaliation;
}

inline void Viagem::setName(const Nome &name){
 this->name = name;
}
inline Nome Viagem::getName() const{
 return name;
}


#endif