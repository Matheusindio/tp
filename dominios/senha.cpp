#include "senha.hpp"


bool Senha::validar(std::string val_senha){

int m = 0;
int n = 0;

for (int i = 0; i < val_senha.length(); i++)
    {
    char d = val_senha [i];

for (int j = 0; j < val_senha.length(); j++)
    { 
        char c = val_senha[j];
        
        if (c == d && j != i)
        {
            throw std::invalid_argument("Senha Incorreta.");
          
        }
        else
        {
            continue;
        }
        
    }

    }



    int j = 1;
    int p = 1;
    int q = 1;

for (int i = 0; i < val_senha.length(); i++)
{
    char e = val_senha[i];
    
    char f = val_senha[j];
    if (val_senha[i] + 1 == val_senha[j])
    {
        p++;
    }
    if (val_senha[i] - 1 == val_senha[j]){
        q++;
    }
        j++;
    
}

if (p == 5 || q == 5)
{
    throw std::invalid_argument("Senha Incorreta.");
    
}


     return true;


    
}


bool Senha::setValor(std::string val_senha){
    validar(val_senha);
    this->val_senha = val_senha;
    return true;
}