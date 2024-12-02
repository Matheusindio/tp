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
