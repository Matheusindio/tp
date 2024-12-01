#ifndef AVALIACAO_HPP_INCLUDED
#define AVALIACAO_HPP_INCLUDED
#include <stdexcept>

class Avaliacao {
    private:
        int valor;
        void validar(int valor);
    public:
        bool setValor(int valor);
        int getValor() const;
};

inline int Avaliacao :: getValor() const{
    return valor;
}

#endif 