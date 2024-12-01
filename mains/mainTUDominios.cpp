#include <iostream>
#include <stdexcept>
#include "../testes/teste.cpp"


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


    return 0;
}
