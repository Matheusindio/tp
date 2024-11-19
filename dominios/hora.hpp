#ifndef hora_HPP_INCLUDED
#define hora_HPP_INCLUDED

class Horario {
    private:
        int hora;
        int minuto;
        bool validarHora(int hora);
        bool validarMinuto(int minuto);
    public:
        bool setHora(int hora);
        bool setMinuto(int minuto);
        int getHora() const;
        int getMinuto() const;
};

inline int Horario :: getHora() const{
    return hora;
}
inline int Horario :: getMinuto() const{
    return minuto;
}

#endif 