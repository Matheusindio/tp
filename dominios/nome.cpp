#include "nome.hpp"


bool Nome::validar(std::string nome){

    if (nome.length() > 30)
    {
        throw std::invalid_argument("Nome Incorreto.");
    } else{
        return true;
    }
    

}

bool Nome::setValor(std::string nome){
    validar(nome);
    this->nome = nome;
    return true;
}