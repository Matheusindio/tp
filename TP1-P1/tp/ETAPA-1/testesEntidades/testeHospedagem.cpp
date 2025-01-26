#include "testeHospedagem.hpp"

void TUHospedagem::setUp(){
    hospedagem = new Hospedagem();
    estado = SUCESSO;
}

void TUHospedagem::tearDown(){
    delete hospedagem;
}

void TUHospedagem::testarCenario(){
    Codigo codigo; 
    Nome nome;
    Avaliacao avaliacao;
    Dinheiro dinheiro;
    codigo.setValor(VALOR_VALIDO_CODIGO);
    nome.setValor(VALOR_VALIDO_NOME);
    avaliacao.setValor(VALOR_VALIDO_AVALIACAO);
    dinheiro.setValor(VALOR_VALIDO_DINHEIRO);
    hospedagem->setAvaliation(avaliacao);
    hospedagem->setCode(codigo);
    hospedagem->setName(nome);
    hospedagem->setMoney(dinheiro);

    if(hospedagem->getAvaliation().getValor() != VALOR_VALIDO_AVALIACAO)
        estado = FALHA;
    if(hospedagem->getCode().getValor() != VALOR_VALIDO_CODIGO)
        estado = FALHA;
    if(hospedagem->getName().getValor() != VALOR_VALIDO_NOME)
        estado = FALHA;
    if(hospedagem->getMoney().getValor() != VALOR_VALIDO_DINHEIRO)
        estado = FALHA;
}

int TUHospedagem::run(){
    setUp();
    testarCenario();
    tearDown();
    return estado;
}
