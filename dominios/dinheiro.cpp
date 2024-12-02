#include "dinheiro.hpp"

bool Dinheiro::validar(float valor){
    if(valor >= 0 && valor <= 200000){
        return true;
    } else {
        throw std::invalid_argument("Dinheiro Errado");
    }
}

bool Dinheiro::setValor(float valor){
    validar(valor);
    this->valor = valor;
    return true;
}


