#ifndef CODIGO_HPP_INCLUDED
#define CODIGO_HPP_INCLUDED
#include <iostream>



class Codigo
{
private:
    std::string str;
    void validar(std::string str);
public:
    bool setValor(std::string str);
    std::string getValor() const;
};

inline std::string Codigo :: getValor() const{
    return str;

}

#endif