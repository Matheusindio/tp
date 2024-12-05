#include <iostream>
#include <stdexcept>
#include "../testesDominios/testeAvaliacao.cpp"
#include "../testesDominios/testeCodigo.cpp"
#include "../testesDominios/testeData.cpp"
#include "../testesDominios/testeDinheiro.cpp"
#include "../testesDominios/testeDuracao.cpp"
#include "../testesDominios/testeHorario.cpp"
#include "../testesDominios/testeNome.cpp"
#include "../testesDominios/testeSenha.cpp"
#include "../testesEntidades/testeviagem.cpp"
#include "../testesEntidades/testeDestino.cpp"


using namespace std;

int main()
{
    TUAvaliacao testeAvaliacao;
    switch(testeAvaliacao.run())
    {
        case TUAvaliacao::SUCESSO:cout << "SUCESSO Dominio Avaliacao" << endl;
        break;


        case TUAvaliacao::FALHA:cout << "FALHA Dominio Avaliacao" << endl;
        break;
    }

        TUCodigo testeCodigo;
    switch(testeCodigo.run())
    {
        case TUCodigo::SUCESSO:cout << "SUCESSO Dominio Codigio" << endl;
        break;


        case TUCodigo::FALHA:cout << "FALHA Dominio Codigo" << endl;
        break;
    }

        TUData testeData;
    switch(testeData.run())
    {
        case TUData::SUCESSO:cout << "SUCESSO Dominio Data" << endl;
        break;


        case TUData::FALHA:cout << "FALHA Dominio Data" << endl;
        break;
    }

        TUDinheiro testeDinheiro;
    switch(testeDinheiro.run())
    {
        case TUDinheiro::SUCESSO:cout << "SUCESSO Dominio Dinheiro" << endl;
        break;


        case TUDinheiro::FALHA:cout << "FALHA Dominio Dinheiro" << endl;
        break;
    }

        TUDuracao testeDuracao;
    switch(testeDuracao.run())
    {
        case TUDuracao::SUCESSO:cout << "SUCESSO Dominio Duracao" << endl;
        break;


        case TUDuracao::FALHA:cout << "FALHA Dominio Duracao" << endl;
        break;
    }

        TUHorario testeHorario;
    switch(testeHorario.run())
    {
        case TUHorario::SUCESSO:cout << "SUCESSO Dominio Horario" << endl;
        break;


        case TUHorario::FALHA:cout << "FALHA Dominio Horario" << endl;
        break;
    }

        TUNome testeNome;
    switch(testeNome.run())
    {
        case TUNome::SUCESSO:cout << "SUCESSO Dominio Nome" << endl;
        break;


        case TUNome::FALHA:cout << "FALHA Dominio Nome" << endl;
        break;
    }

        TUSenha testeSenha;
    switch(testeSenha.run())
    {
        case TUSenha::SUCESSO:cout << "SUCESSO Dominio Senha" << endl;
        break;


        case TUSenha::FALHA:cout << "FALHA Dominio Senha" << endl;
        break;
    }

        TUViagem testeViagem;
        switch(testeViagem.run())
    {
        case TUViagem::SUCESSO:cout << "SUCESSO Entidade Viagem" << endl;
        break;


        case TUViagem::FALHA:cout << "FALHA Entidade Viagem" << endl;
        break;
    }
    
        TUDestino testeDestino;
        switch (testeDestino.run())
        {
        case TUDestino::SUCESSO:cout << "SUCESSO Entidade Destino" << endl;
            break;
        
        case TUDestino::FALHA:cout << "FALHA Entidade Destino" << endl;
            break;
        }
    return 0;
}
