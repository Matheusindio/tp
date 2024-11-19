#ifndef AVALIACAO_HPP_INCLUDED
#define AVALIACAO_HPP_INCLUDED

class Avaliacao {
    private:
        int valor;
        bool validar(int valor);
    public:
        bool setValor(int valor);
        int getValor() const;
};

inline int Avaliacao :: getValor() const{
    return valor;
}

#endif 