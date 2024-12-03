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


using namespace std;

int main()
{
    TUAvaliacao testeAvaliacao;
    switch(testeAvaliacao.run())
    {
        case TUAvaliacao::SUCESSO:cout << "SUCESSO" << endl;
        break;


        case TUAvaliacao::FALHA:cout << "FALHA" << endl;
        break;
    }

        TUCodigo testeCodigo;
    switch(testeCodigo.run())
    {
        case TUCodigo::SUCESSO:cout << "SUCESSO" << endl;
        break;


        case TUCodigo::FALHA:cout << "FALHA" << endl;
        break;
    }

        TUData testeData;
    switch(testeData.run())
    {
        case TUData::SUCESSO:cout << "SUCESSO" << endl;
        break;


        case TUData::FALHA:cout << "FALHA" << endl;
        break;
    }

        TUDinheiro testeDinheiro;
    switch(testeDinheiro.run())
    {
        case TUDinheiro::SUCESSO:cout << "SUCESSO" << endl;
        break;


        case TUDinheiro::FALHA:cout << "FALHA" << endl;
        break;
    }

        TUDuracao testeDuracao;
    switch(testeDuracao.run())
    {
        case TUDuracao::SUCESSO:cout << "SUCESSO" << endl;
        break;


        case TUDuracao::FALHA:cout << "FALHA" << endl;
        break;
    }

        TUHorario testeHorario;
    switch(testeHorario.run())
    {
        case TUHorario::SUCESSO:cout << "SUCESSO" << endl;
        break;


        case TUHorario::FALHA:cout << "FALHA" << endl;
        break;
    }

        TUNome testeNome;
    switch(testeNome.run())
    {
        case TUNome::SUCESSO:cout << "SUCESSO" << endl;
        break;


        case TUNome::FALHA:cout << "FALHA" << endl;
        break;
    }

        TUSenha testeSenha;
    switch(testeSenha.run())
    {
        case TUSenha::SUCESSO:cout << "SUCESSO" << endl;
        break;


        case TUSenha::FALHA:cout << "FALHA" << endl;
        break;
    }

    return 0;
}
