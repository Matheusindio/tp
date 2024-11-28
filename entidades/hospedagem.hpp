#ifndef HOSPEDAGEM_HPP_INCLUDED
#define HOSPEDAGEM_HPP_INCLUDED
#include "../dominios/codigo.hpp"
#include "../dominios/nome.hpp"
#include "../dominios/avaliacao.hpp"
#include "../dominios/dinheiro.hpp"
using namespace std;


class Hospedagem {
 private:
 Codigo code;                              
 Nome name;                              
 Avaliacao avaliation;
 Dinheiro money;                  
 public:
 void setCode(const Codigo& code);
 Codigo getCode() const;
 void setName(const Nome& name);
 Nome getName() const;
 void setAvaliation(const Avaliacao& avaliation);
 Avaliacao getAvaliation() const;
 void setMoney(const Dinheiro& money);
 Dinheiro getMoney() const;
 
};

inline void Hospedagem::setCode(const Codigo &code){
 this->code = code;
}
inline Codigo Hospedagem::getCode() const{
 return code;
}

inline void Hospedagem::setAvaliation(const Avaliacao &avaliation){
 this->avaliation = avaliation;
}
inline Avaliacao Hospedagem::getAvaliation() const{
 return avaliation;
}

inline void Hospedagem::setName(const Nome &name){
 this->name = name;
}
inline Nome Hospedagem::getName() const{
 return name;
}

inline void Hospedagem::setMoney(const Dinheiro &money){
 this->money = money;
}
inline Dinheiro Hospedagem::getMoney() const{
 return money;
}

#endif