#ifndef DINHEIRO_HPP_INCLUDED
#define DINHEIRO_HPP_INCLUDED

class Dinheiro {
    private:
        float valor;
        bool validar(float valor);
    public:
        bool setValor(float valor);
        float getValor() const;
};

inline float Dinheiro :: getValor() const{
    return valor;
}

#endif 