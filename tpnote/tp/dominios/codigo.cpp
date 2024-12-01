#include "codigo.hpp"
#include <ctype.h>

void Codigo::validar(std::string str){
    int len = str.length();
    if (len != 6){
        throw std::invalid_argument("Argumento Invalido");
    }
    else
    {
    for (char c : str) {          
        if (!isalnum(c)) {         
            throw std::invalid_argument("Argumento Invalido");        
        }
    }
                         
        
    }

}

bool Codigo::setValor(std::string str){
    validar(str);
    this->str = str;
    return true;


}