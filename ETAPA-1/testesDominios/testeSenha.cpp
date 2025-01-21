#include "testeSenha.hpp"

using namespace std;


//Teste Senha

void TUSenha::setUp()
{
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown()
{
    delete senha;
}

void TUSenha::TestarCenarioValorValido()
{
    try
    {
        senha->setValor(VALOR_VALIDO);
        if(senha->getValor() != VALOR_VALIDO)
            estado = FALHA;
        
    }
    catch(invalid_argument& exececao)
    {
        estado = FALHA;
    }
    
}

void TUSenha::TestarCenarioValorInvalido()
{
    try
    {
        senha->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument& exececao)
    {
        if(senha->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
    
}

int TUSenha::run()
{
    setUp();
    TestarCenarioValorValido();
    TestarCenarioValorInvalido();
    tearDown();
    return estado;
}
