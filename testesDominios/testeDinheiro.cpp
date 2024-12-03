#include "testeDinheiro.hpp"

using namespace std;

// TESTE DINHEIRO

void TUDinheiro::setUp()
{
    dinheiro = new Dinheiro();
    estado = SUCESSO;
}

void TUDinheiro::tearDown()
{
    delete dinheiro;
}

void TUDinheiro::TestarCenarioValorValido()
{
    try
    {
        dinheiro->setValor(VALOR_VALIDO);
        if(dinheiro->getValor() != VALOR_VALIDO)
            estado = FALHA;
        
    }
    catch(invalid_argument& exececao)
    {
        estado = FALHA;
    }
    
}

void TUDinheiro::TestarCenarioValorInvalido()
{
    try
    {
        dinheiro->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument& exececao)
    {
        if(dinheiro->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
    
}

int TUDinheiro::run()
{
    setUp();
    TestarCenarioValorValido();
    TestarCenarioValorInvalido();
    tearDown();
    return estado;
}  
