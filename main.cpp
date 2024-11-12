#include <iostream>
#include "avaliacao.cpp"

using namespace std;

int main(){
    
    Avaliacao aval;

    if(aval.setValor(6)){
        cout << "Valor = " << aval.getValor() << endl;
    } else {
        cout << "Valor invalido" << endl;
    }
    
    return 0;
}