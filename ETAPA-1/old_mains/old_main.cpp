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
#include "../entidades/viagem.hpp"
#include "../entidades/atividade.hpp"
#include "../entidades/conta.hpp"
#include "../entidades/hospedagem.hpp"
#include "../entidades/destino.hpp"

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
    if (datainit.setData("11/12/44") && datafim.setData("11/12/44")) {
        destiny.setDatas(datainit, datafim);
        cout << "Data inicial: " << destiny.getDatainit().getData() << endl;
        cout << "Data final: " << datafim.getData() << endl;
    }
} catch (const invalid_argument& e) {
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

    if(code.setValor("queroq") && durar.setValor(12) && preco.setValor(12.2) && aval.setValor(5) && nomear.setValor("alexandre") && datar.setData("10/02/02") && horario.setHorario("12:04"))
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
        cout << "Horário = " << activity.getHorario().getHorario() << endl;       
        cout << "Data = " << activity.getData().getData() << endl;
    }

    else
    {
        cout << "Informações Invalidas" << endl;
    }
}
