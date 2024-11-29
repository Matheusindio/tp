#include "teste.hpp"

using namespace std;

//TESTE AVALIAÇÃO

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

//TESTE CÓDIGO

void TUCodigo ::setUp()
{
    codigo = new Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown()
{
    delete codigo;
}

void TUCodigo::TestarCenarioValorValido()
{
    try
    {
        codigo->setValor(VALOR_VALIDO);
        if(codigo->getValor() != VALOR_VALIDO)
            estado = FALHA;
        
    }
    catch(invalid_argument& exececao)
    {
        estado = FALHA;
    }
    
}

void TUCodigo::TestarCenarioValorInvalido()
{
    try
    {
        codigo->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument& exececao)
    {
        if(codigo->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
    
}

int TUCodigo::run()
{
    setUp();
    TestarCenarioValorValido();
    TestarCenarioValorInvalido();
    tearDown();
    return estado;
}   
