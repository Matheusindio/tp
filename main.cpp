#include <iostream>
#include "avaliacao.cpp"
#include "dinheiro.cpp"
#include "codigo.cpp"

using namespace std;

int main(){
    
    Avaliacao aval;

    if(aval.setValor(3)){
        cout << "Valor = " << aval.getValor() << endl;
    } else {
        cout << "Valor invalido" << endl;
    }
    
        if(aval.setValor(6)){
        cout << "Valor = " << aval.getValor() << endl;
    } else {
        cout << "Valor invalido" << endl;
    }

    Dinheiro money;
    
    if(money.setValor(200000)){
        cout << "Preço = " << money.getValor() << endl;
    } else {
        cout << "Preço invalido" << endl;
    }
    
    if(money.setValor(1000000)){
        cout << "Preço = " << money.getValor() << endl;
    } else {
        cout << "Preço invalido" << endl;
    }

    Codigo code;
    if(code.setValor("ABCeeE")){
        cout << "Código = " << code.getValor() << endl;
    } else {
        cout << "Código Invalido" << endl;
    }
    if(code.setValor("ABC**E")){
        cout << "Código = " << code.getValor() << endl;
    } else {
        cout << "Código Invalido" << endl;
    }

    return 0;
}