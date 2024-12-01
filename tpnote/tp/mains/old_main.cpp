#include <iostream>
#include <iomanip>
#include "../tp/dominios/avaliacao.cpp"
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

Data datar;
Nome nomear;
Avaliacao aval;
Codigo code;
Senha senhar;
Horario horario;
Duracao durar;

Viagem viagem; 
    if (code.setValor("ABCeeE") && nomear.setValor("DANIEL1234") && aval.setValor(3)){ //dia,mes,ano
        viagem.setCode(code);
        viagem.setName(nomear);
        viagem.setAvaliation(aval);
         cout << "Codigo = "<< viagem.getCode().getValor()<< endl;
         cout << "Nome = " << viagem.getName().getValor() << endl;
         cout << "Avaliação = " << viagem.getAvaliation().getValor() << endl;
    } else{
        cout << "Informações Incorretas" << endl;
    }



Destino destiny;
Data datainit;
Data datafim;
try {
    if (code.setValor("ABCeeE") && nomear.setValor("DANIEL1234") && aval.setValor(5) &&
        datainit.setData(1, 9, 7) && datafim.setData(28, 2, 6)) {
        
        destiny.setCode(code);
        destiny.setName(nomear);
        destiny.setAvaliation(aval);
        destiny.setDatas(datainit, datafim);

        cout << "Codigo = " << destiny.getCode().getValor() << endl;
        cout << "Nome = " << destiny.getName().getValor() << endl;
        cout << "Avaliação = " << destiny.getAvaliation().getValor() << endl;
    if(1)
    {
        cout << "Data de ínicio = "
                  << setw(2) << setfill('0') << destiny.getDatainit().getDia() << "/"
                  << setw(2) << setfill('0') << destiny.getDatainit().getMes() << "/"
                  << setw(2) << setfill('0') << destiny.getDatainit().getAno() << endl;
        cout << "Data de término = "
                  << setw(2) << setfill('0') << destiny.getDatafim().getDia() << "/"
                  << setw(2) << setfill('0') << destiny.getDatafim().getMes() << "/"
                  << setw(2) << setfill('0') << destiny.getDatafim().getAno() << endl;
    }
    else {
        std::cout << "Data inserida inexistente." << std::endl;
    }
    }
        else
    {
        cout << "informaçoes incorretas" << endl; 
    }



} 


catch (const invalid_argument& e) {
    cerr << "Erro: " << e.what() << endl;
}

Hospedagem Hotel;
Dinheiro diaria;
    if(aval.setValor(1) && diaria.setValor(250) && nomear.setValor("DANIELA") && code.setValor("Codigo"))
    {
        Hotel.setCode(code);
        Hotel.setAvaliation(aval);
        Hotel.setMoney(diaria);
        Hotel.setName(nomear);

        cout << "Codigo = " << Hotel.getCode().getValor() << endl;
        cout << "Nome = " << Hotel.getName().getValor() << endl;
        cout << "Diaria = " << Hotel.getMoney().getValor() << endl;
        cout << "Avaliação = " << Hotel.getAvaliation().getValor() << endl;
    

    }
    else
    {
        cout << "Informações Incorretas" << endl;
    }

Conta conta;

    if(code.setValor("123465") && senhar.setValor("Everyt"))
    {
        conta.setCode(code);
        conta.setPass(senhar);

        cout << "Codigo = " << conta.getCode().getValor() << endl;
        cout << "Senha = " << conta.getPass().getValor() << endl;
    }
    else
    {
        cout << "Informações Incorretas" << endl;
    }

Atividade activity;
Dinheiro preco;

    if(code.setValor("queroq") && durar.setValor(12) && preco.setValor(12.2) && aval.setValor(5) && nomear.setValor("alexandre") && datar.setData(29,2,5) && horario.setHora(12,2))
    {
        activity.setAval(aval);
        activity.setCode(code);
        activity.setData(datar);
        activity.setDuracao(durar);
        activity.setHorario(horario);
        activity.setPreco(preco);
        activity.setNome(nomear);

        cout << "Avaliação" << activity.getAval().getValor() << endl;
        cout << "Código = " << activity.getCode().getValor() << endl;
        cout << "Duração = " << activity.getDuracao().getValor() << endl;
        cout << "Preço = " << activity.getPreco().getValor() << endl;
        cout << "Nome = " << activity.getNome().getValor() << endl;
        cout << "Horário = "
             << setw(2) << setfill('0') << activity.getHorario().getHora() << ":"
             << setw(2) << setfill('0') << activity.getHorario().getMinuto() << endl;       
        cout << "Data = "
             << setw(2) << setfill('0') << activity.getData().getDia() << "/"
             << setw(2) << setfill('0') << activity.getData().getMes() << "/"
             << setw(2) << setfill('0') << activity.getData().getAno() << endl;
    }

    else
    {
        cout << "Informações Invalidas" << endl;
    }
}
