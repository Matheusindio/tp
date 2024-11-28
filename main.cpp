#include <iostream>
#include <iomanip>
#include "dominios/avaliacao.cpp"
#include "dominios/dinheiro.cpp"
#include "dominios/codigo.cpp"
#include "dominios/duracao.cpp"
#include "dominios/hora.cpp"
#include "dominios/senha.cpp"
#include "dominios/nome.cpp"
#include "dominios/data.cpp"
#include "entidades/viagem.hpp"
#include "entidades/atividade.hpp"
#include "entidades/conta.hpp"
#include "entidades/hospedagem.hpp"
#include "entidades/destino.hpp"

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
    
    Horario horar;

    if (horar.setHora(5,0)){
         cout << "Horario = "
             << setw(2) << setfill('0') << horar.getHora() << ":"
             << setw(2) << setfill('0') << horar.getMinuto()
             << endl;
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

    if (datar.setData(29,01,0)){ //dia,mes,ano
         cout << "Data = "
             << setw(2) << setfill('0') << datar.getDia() << "/"
             << setw(2) << setfill('0') << datar.getMes() << "/"
             << setw(2) << setfill('0') << datar.getAno() << endl;
    } else{
        cout << "Data Incorreta" << endl;
    }

Viagem viagem; 
    if (code.setValor("ABCeeE") && nomear.setValor("DANIEL1234") && aval.setValor(3)){ //dia,mes,ano
        viagem.setCode(code);
        viagem.setName(nomear);
        viagem.setAvaliation(aval);
         cout << "Codigo = "<< viagem.getCode().getValor()<< endl;
         cout << "Nome = " << viagem.getName().getValor() << endl;
         cout << "Avaliação = " << viagem.getAvalation().getValor() << endl;
    } else{
        cout << "Informações Incorretas" << endl;
    }



Destino destiny;
Data datainit;
Data datafim;
try {
    if (code.setValor("ABCeeE") && nomear.setValor("DANIEL1234") && aval.setValor(0) &&
        datainit.setData(1, 9, 4) && datafim.setData(28, 2, 2)) {
        
        destiny.setCode(code);
        destiny.setName(nomear);
        destiny.setAvaliation(aval);
        destiny.setDatas(datainit, datafim);

        std::cout << "Codigo = " << destiny.getCode().getValor() << std::endl;
        std::cout << "Nome = " << destiny.getName().getValor() << std::endl;
        std::cout << "Avaliação = " << destiny.getAvaliation().getValor() << std::endl;
    if(1)
    {
        std::cout << "Data de ínicio = "
                  << std::setw(2) << std::setfill('0') << destiny.getDatainit().getDia() << "/"
                  << std::setw(2) << std::setfill('0') << destiny.getDatainit().getMes() << "/"
                  << std::setw(2) << std::setfill('0') << destiny.getDatainit().getAno() << std::endl;
        std::cout << "Data de término = "
                  << std::setw(2) << std::setfill('0') << destiny.getDatafim().getDia() << "/"
                  << std::setw(2) << std::setfill('0') << destiny.getDatafim().getMes() << "/"
                  << std::setw(2) << std::setfill('0') << destiny.getDatafim().getAno() << std::endl;
    }
    else {
        std::cout << "Data inserida inexistente." << std::endl;
    }
    }
        else
    {
        cout << "informaçoes incorretas" << endl; 
    }

    //as vezes ta dando conflito com a info de viagem, o aval principalmente
} 

catch (const std::invalid_argument& e) {
    std::cerr << "Erro: " << e.what() << std::endl;
}


    

}
