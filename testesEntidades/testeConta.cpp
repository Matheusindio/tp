#include "testeConta.hpp"

void TUConta::setUp(){
    conta = new Conta();
    estado = SUCESSO;
}

void TUConta::tearDown(){
    delete conta;
}

void TUConta::testarCenario(){
    Codigo codigo;
    Senha senha;
    codigo.setValor(VALOR_VALIDO_CODIGO);
    senha.setValor(VALOR_VALIDO_SENHA);

    if(conta->getCode().getValor() != VALOR_VALIDO_CODIGO)
    estado = FALHA;
    if(conta->getPass().getValor() != VALOR_VALIDO_SENHA)
    estado = FALHA;
}

int TUConta::run(){
    setUp();
    testarCenario();
    tearDown();
    return estado;
}