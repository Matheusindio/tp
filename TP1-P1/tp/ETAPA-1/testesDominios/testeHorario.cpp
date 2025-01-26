#include "testeHorario.hpp"

using namespace std;


//Teste Horario

void TUHorario::setUp()
{
    horario = new Horario();
    estado = SUCESSO;
}

void TUHorario::tearDown()
{
    delete horario;
}

void TUHorario::TestarCenarioValorValido()
{
    try
    {
        horario->setHorario(VALOR_VALIDO);
        if(horario->getHorario() != VALOR_VALIDO)
            estado = FALHA;
        
    }
    catch(invalid_argument& exececao)
    {
        estado = FALHA;
    }
    
}

void TUHorario::TestarCenarioValorInvalido()
{
    try
    {
        horario->setHorario(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument& exececao)
    {
        if(horario->getHorario() == VALOR_INVALIDO)
            estado = FALHA;
    }
    
}

int TUHorario::run()
{
    setUp();
    TestarCenarioValorValido();
    TestarCenarioValorInvalido();
    tearDown();
    return estado;
}
