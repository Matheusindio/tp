#ifndef NOME_HPP_INCLUDED
#define NOME_HPP_INCLUDED
#include <iostream>

class Nome {
    private:
        std::string nome;
        bool validar(std::string nome);
    public:
        bool setValor(std::string nome);
        std::string getValor() const;

};

inline std::string Nome :: getValor() const{
    return nome;



}
#endif 