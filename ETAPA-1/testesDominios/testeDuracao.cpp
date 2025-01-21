#include "testeDuracao.hpp"

using namespace std;

//Teste Duracao

void TUDuracao::setUp()
{
    duracao = new Duracao();
    estado = SUCESSO;
}

void TUDuracao::tearDown()
{
    delete duracao;
}

void TUDuracao::TestarCenarioValorValido()
{
    try
    {
        duracao->setValor(VALOR_VALIDO);
        if(duracao->getValor() != VALOR_VALIDO)
            estado = FALHA;
        
    }
    catch(invalid_argument& exececao)
    {
        estado = FALHA;
    }
    
}

void TUDuracao::TestarCenarioValorInvalido()
{
    try
    {
        duracao->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument& exececao)
    {
        if(duracao->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
    
}

int TUDuracao::run()
{
    setUp();
    TestarCenarioValorValido();
    TestarCenarioValorInvalido();
    tearDown();
    return estado;
}
