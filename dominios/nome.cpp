#include "nome.hpp"


bool Nome::validar(std::string nome){

    if (nome.length() > 30)
    {
        return false;
    } else{
        return true;
    }
    

}

bool Nome::setValor(std::string nome){
    if(!validar(nome)){
        return false;
    }
    this->nome = nome;
    return true;
}