#include "duracao.hpp"


bool Duracao::validar(int val){
    if(val >= 0 && val <= 360){
    return true;
    } else{
    throw std::invalid_argument("Duração Invalida");
    }
}
bool Duracao::setValor(int val){
    validar(val);
    this->val = val;
    return true;
}
