#include "duracao.hpp"


bool Duracao::validar(int val){
    if(val >= 0 && val <= 360){
    return true;
    } else{
    return false;
    }
}
bool Duracao::setValor(int val){
    if(!validar(val)){
        return false;
    }
    this->val = val;
    return true;
}
