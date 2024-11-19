#ifndef DATA_HPP_INCLUDED
#define DATA_HPP_INCLUDED

class Data {
    private:
        int dia;
        int mes;
        int ano;
        bool validarData(int dia, int mes, int ano);

    public:
        bool setData(int dia, int mes, int ano);      
        int getDia() const;
        int getMes() const;
        int getAno() const;
};

inline int Data :: getDia() const{
    return dia;
}
inline int Data :: getMes() const{
    return mes;
}
inline int Data :: getAno() const{
    return ano;
}


#endif 