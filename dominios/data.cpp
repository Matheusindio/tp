#include "data.hpp"



bool Data::validarData(int dia, int mes, int ano)  {
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
    



bool Data::setData(int dia, int mes, int ano) {
    if (!validarData(dia, mes, ano)) {
        return false;
    }
    this -> dia = dia;
    this -> mes = mes;
    this -> ano = ano;
    return true;
}

