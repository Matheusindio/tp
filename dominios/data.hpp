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


    public:
        
        bool setData(std::string data); 
        std::string getData() const;
        bool setDia(std::string data);
        bool setMes(std::string data);
        bool setAno(std::string data);
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