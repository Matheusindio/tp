#include "testeDestino.hpp"

void TUDestino::setUp(){
    destino = new Destino();
    estado = SUCESSO;
}
void TUDestino::tearDown(){
    delete destino;
}
void TUDestino::testarCenario(){
    Codigo codigo;
    Nome nome;
    Avaliacao avaliacao;
    Data datainicial;
    Data datafinal;
    codigo.setValor(VALOR_VALIDO_CODIGO);
    nome.setValor(VALOR_VALIDO_NOME);
    avaliacao.setValor(VALOR_VALIDO_AVALIACAO);
    datainicial.setData(VALOR_VALIDO_DATAINICIAL);
    datafinal.setData(VALOR_VALIDO_DATAFINAL);
    destino->setAvaliation(avaliacao);
    destino->setCode(codigo);
    destino->setName(nome);
    destino->setDatas(datainicial, datafinal);

    if(destino->getAvaliation().getValor() != VALOR_VALIDO_AVALIACAO)
        estado = FALHA;
    if(destino->getCode().getValor() != VALOR_VALIDO_CODIGO)
        estado = FALHA;
    if(destino->getName().getValor() != VALOR_VALIDO_NOME)
        estado = FALHA;
    if(destino->getDatainit().getData() != VALOR_VALIDO_DATAINICIAL || destino->getDatafim().getData() != VALOR_VALIDO_DATAFINAL)
        estado = FALHA;
}
    int TUDestino::run(){
    setUp();
    testarCenario();
    tearDown();
    return estado;
}