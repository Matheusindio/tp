#ifndef DATA_HPP_INCLUDED
#define DATA_HPP_INCLUDED

#include <sstream>
#include <iomanip>

class Data {
    private:
        int dia;
        int mes;
        int ano;
        std::string data;
        bool validarData(std::string data);
        bool validarDia(std::string data);
        bool validarMes(std::string data);
        bool validarAno(std::string data);
        void extrairData(int &dia, int &mes, int &ano) const;

    public:
        
        bool setData(std::string data);
        void setDia(std::string data);
        void setMes(std::string data);
        void setAno(std::string data);
        std::string getData() const;
        int getDia() const;
        int getMes() const;
        int getAno() const;         
};



inline std::string Data::getData() const {
    return data;
}

inline int Data::getDia() const {
    return dia;
}
inline int Data::getMes() const {
    return mes;
}
inline int Data::getAno() const {
    return ano;
}


#endif 