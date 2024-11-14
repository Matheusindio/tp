#include <iostream>
#include "avaliacao.cpp"
#include "dinheiro.cpp"
#include "codigo.cpp"
#include "duracao.cpp"

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

    Duracao dur;
    if(dur.setValor(210)){
        cout << "Duração = " << dur.getValor() << endl;
    } else {
        cout << "Duração Invalida" << endl;
    }
        if(dur.setValor(361)){
        cout << "Duração = " << dur.getValor() << endl;
    } else {
        cout << "Duração Invalida" << endl;
    }

    return 0; 

    ///Horário 00:00
    Horario horar;
    int hora, minuto;

    if (horar.setHora(0) && horar.setMinuto(5)){
         cout << "Horario = "
             << setw(2) << setfill('0') << horar.getHora() << ":"
             << setw(2) << setfill('0') << horar.getMinuto()
             << endl;
    } else{
        cout << "Horario Invalido" << endl;
    }

}
