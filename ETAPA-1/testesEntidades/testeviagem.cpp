#include "testeviagem.hpp"

void TUViagem::setUp(){
    viagem = new Viagem();
    estado = SUCESSO;
}
void TUViagem::tearDown(){
    delete viagem;
}
void TUViagem::testarCenario(){
    Codigo codigo;
    Nome nome;
    Avaliacao avaliacao;
    codigo.setValor(VALOR_VALIDAR_CODIGO);
    nome.setValor(VALOR_VALIDO_NOME);
    avaliacao.setValor(VALOR_VALIDO_AVALIACAO);
    viagem->setAvaliation(avaliacao);
    viagem->setCode(codigo);
    viagem->setName(nome);

    if(viagem->getAvaliation().getValor() != VALOR_VALIDO_AVALIACAO)
        estado = FALHA;
    if(viagem->getCode().getValor() != VALOR_VALIDAR_CODIGO)
        estado = FALHA;
    if(viagem->getName().getValor() != VALOR_VALIDO_NOME)
        estado = FALHA;
}
int TUViagem::run(){
    setUp();
    testarCenario();
    tearDown();
    return estado;
}