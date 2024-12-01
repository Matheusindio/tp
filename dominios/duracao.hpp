#ifndef DURACAO_HPP_INCLUDED
#define DURACAO_HPP_INCLUDED

class Duracao {
    private:
        int val;
        bool validar(int val);

    public:
        bool setValor(int val);
        int getValor() const;

};

inline int Duracao :: getValor() const{
    return val;

}


#endif