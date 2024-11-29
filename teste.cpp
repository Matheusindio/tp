#include "teste.hpp"


void TUAvaliacao::setUp()
{
    avaliacao = new Avaliacao();
    estado = SUCESSO;
}

void TUAvaliacao::tearDown()
{
    delete avaliacao;
}

void TUAvaliacao::TestarCenarioValorValido()
{
    try
    {
        avaliacao->setValor(VALOR_VALIDO);
        if(avaliacao->getValor() != VALOR_VALIDO)
            estado = FALHA;
        
    }
    catch(invalid_argument& exececao)
    {
        estado = FALHA;
    }
    
}

void TUAvaliacao::TestarCenarioValorInvalido()
{
    try
    {
        avaliacao->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument& exececao)
    {
        if(avaliacao->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
    
}

int TUAvaliacao::run()
{
    setUp();
    TestarCenarioValorValido();
    TestarCenarioValorInvalido();
    tearDown();
    return estado;
}   