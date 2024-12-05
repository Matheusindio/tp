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
        std::string getData();
        int getDia();
        int getMes();
        int getAno();         
};



inline std::string Data::getData(){
    return data;
}

inline int Data::getDia(){
    std::sscanf(data.c_str(), "%2d/%2d/%2d", &dia, &mes, &ano);
    return dia;
}
inline int Data::getMes(){
    std::sscanf(data.c_str(), "%2d/%2d/%2d", &dia, &mes, &ano);
    return mes;
}
inline int Data::getAno(){
    std::sscanf(data.c_str(), "%2d/%2d/%2d", &dia, &mes, &ano);
    return ano;
}


#endif 