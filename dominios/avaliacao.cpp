#include "avaliacao.hpp"

bool Avaliacao::validar(int valor){
    if(valor == 0 || valor == 1 || valor == 2 || valor == 3 || valor == 4  || valor == 5 ){
        return true;
    } else {
        return false;
    }
}

bool Avaliacao::setValor(int valor){
    if(!validar(valor)){
        return false;
    }
    this->valor = valor;
    return true;
}


