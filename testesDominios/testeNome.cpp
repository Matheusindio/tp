#include "testeNome.hpp"

using namespace std;


//Teste Nome

void TUNome::setUp()
{
    nome = new Nome();
    estado = SUCESSO;
}

void TUNome::tearDown()
{
    delete nome;
}

void TUNome::TestarCenarioValorValido()
{
    try
    {
        nome->setValor(VALOR_VALIDO);
        if(nome->getValor() != VALOR_VALIDO)
            estado = FALHA;
        
    }
    catch(invalid_argument& exececao)
    {
        estado = FALHA;
    }
    
}

void TUNome::TestarCenarioValorInvalido()
{
    try
    {
        nome->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument& exececao)
    {
        if(nome->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
    
}

int TUNome::run()
{
    setUp();
    TestarCenarioValorValido();
    TestarCenarioValorInvalido();
    tearDown();
    return estado;
}
