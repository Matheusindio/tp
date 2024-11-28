#ifndef CONTA_HPP_INCLUDED
#define CONTA_HPP_INCLUDED
#include "../dominios/codigo.hpp"
#include "../dominios/senha.hpp"

class Conta
{
private:
    Codigo code;
    Senha pass;
public:
    void setCode(const Codigo& code);
    Codigo getCode() const;
    void setPass(const Senha& pass);
    Senha getPass() const;

};

inline void Conta::setCode(const Codigo& code)
{
    this->code = code;
}

inline Codigo Conta::getCode() const{return code;}

inline void Conta::setPass(const Senha& pass)
{
    this->pass = pass;
}

inline Senha Conta::getPass() const {return pass;}


#endif