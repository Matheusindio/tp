#include "avaliacao.hpp"



void Avaliacao::validar(int valor){
    if(valor == 0 || valor == 1 || valor == 2 || valor == 3 || valor == 4  || valor == 5 ){
        
    } else {
        throw std::invalid_argument("Número invalido::Avaliação");
       
    }
}

bool Avaliacao::setValor(int valor){
        validar(valor);
        this->valor = valor;
        return true;
}


