#include "codigo.hpp"
#include <ctype.h>

bool Codigo::validar(std::string str){
    int len = str.length();
    if (len != 6){
        return false;
    }
    else
    {
    for (char c : str) {          
        if (!isalnum(c)) {         
            return false;          
        }
    }
    return true;                     
        
    }
    

}