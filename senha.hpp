#ifndef SENHA_HPP_INCLUDED
#define SENHA_HPP_INCLUDED
#include <iostream>

class Senha {
    private:
        std::string val_senha;
        bool validar(std::string val_senha);
    public:
        bool setValor(std::string val_senha);
        std::string getValor() const;

};

inline std::string Senha :: getValor() const{
    return val_senha;


}

#endif 