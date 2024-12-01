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
        void extrairData(int &dia, int &mes, int &ano) const;

    public:
        
        bool setData(std::string data); 
        std::string getData() const;
        int getDia() const;
        int getMes() const;
        int getAno() const;         
};



inline std::string Data::getData() const {
    return data;
}

inline int Data::getDia() const {
    std::sscanf(data.c_str(), "%2d/%2d/%2d", &dia, &mes, &ano);
    return dia;
}
inline int Data::getMes() const {
    std::sscanf(data.c_str(), "%2d/%2d/%2d", &dia, &mes, &ano);
    return mes;
}
inline int Data::getAno() const {
    std::sscanf(data.c_str(), "%2d/%2d/%2d", &dia, &mes, &ano);
    return ano;
}


#endif 