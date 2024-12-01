#include "data.hpp"
#include <cstdio>




bool Data::validarData(std::string data)  {
    int dia;
    int mes;
    int ano;
    std::sscanf(data.c_str(), "%2d/%2d/%2d", &dia, &mes, &ano);
    int anobis = ano % 4;
if(ano >= 00 && ano <= 99)
{
    if(mes >=01 && mes <= 12)
    {
        if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
        {
            if(dia >= 1 && dia <= 31)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
            
        else if(mes == 02)
    {
        if(anobis == 0)
        {
            if(dia >= 01 && dia <= 29)
            {
                return true; 
            }
            else
            {
                return false;
            }
        }
        else
        {
            if(dia >=01 && dia <= 28)
            {
                return true; 
            }
            else
            {
                return false;
            }
        }
    }
            
        else
            {
            if(dia >= 01 && dia <= 30)
            {
                return true;
            }
            else
            {
                return false;
            }
            }
    }
    else
    {
        return false;
    }
}
else
{
    return false;
}

            }
    



bool Data::setData(std::string data) {
    if (!validarData(data)) {
        return false;
    }
    this -> data = data;
    return true;
}

