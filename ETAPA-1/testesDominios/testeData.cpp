#include "testeData.hpp"

using namespace std;


//TESTE DATA

void TUData::setUp()
{
    data = new Data();
    estado = SUCESSO;
}

void TUData::tearDown()
{
    delete data;
}

void TUData::TestarCenarioValorValido()
{
    try
    {
        data->setData(VALOR_VALIDO);
        if(data->getData() != VALOR_VALIDO)
            estado = FALHA;
        
    }
    catch(invalid_argument& exececao)
    {
        estado = FALHA;
    }
    
}

void TUData::TestarCenarioValorInvalido()
{
    try
    {
        data->setData(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument& exececao)
    {
        if(data->getData() == VALOR_INVALIDO)
            estado = FALHA;
    }
    
}

int TUData::run()
{
    setUp();
    TestarCenarioValorValido();
    TestarCenarioValorInvalido();
    tearDown();
    return estado;
}  
