#include <iostream>
#include <iomanip>
#include "../dominios/avaliacao.cpp"
#include "../dominios/dinheiro.cpp"
#include "../dominios/codigo.cpp"
#include "../dominios/nome.cpp"
#include "../dominios/duracao.cpp"
#include "../dominios/hora.cpp"
#include "../dominios/data.cpp"
#include "../dominios/senha.cpp"

using namespace std;



int main()
{
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
    

    Horario horar;

    if (horar.setHorario("14:04")){
         cout << "Horario = " << horar.getHorario() << endl;
    } else{
        cout << "Horario Invalido" << endl;
    }

    Senha senhar;

    if(senhar.setValor("02569")){
        cout << "Senha Correta! -- " << senhar.getValor() << endl;
    } else{
        cout << "Senha Invalida!" << endl;
    }
    if(senhar.setValor("12345")){
        cout << "Senha Correta! -- " << senhar.getValor() << endl;
    } else{
        cout << "Senha Invalida!" << endl;
    }

    Nome nomear;
    
    if(nomear.setValor("DANIEL1234")){
        cout << "Nome Correto! -- " << nomear.getValor() << endl;
    } else{
        cout << "Nome Invalido!" << endl;
    }
    if(nomear.setValor("DANIELDEZANBABYJOAOFILIPEMONTEIRODEARAUJOLIMA")){
        cout << "Nome Correto! -- " << nomear.getValor() << endl;
    } else{
        cout << "Nome Invalido!" << endl;
    }
   
    Data datar;

    if (datar.setData("29/2/2")){ //dia,mes,ano
         cout << "Data = " << datar.getData() << endl; 
    } else{
        cout << "Data Incorreta" << endl;
    }
}
