#include "testeAtividade.hpp"
void TUAtividade::setUp()
{
    atividade = new Atividade();
    estado = SUCESSO;
}
void TUAtividade::tearDown()
{
    delete atividade;
}
void TUAtividade::testarCenario(){
    Codigo code;
    Horario hora;
    Duracao duracao;
    Dinheiro preco;
    Avaliacao aval;
    Nome nome;
    Data data;
    
    code.setValor(VALOR_VALIDO_CODIGO);
    hora.setHorario(VALOR_VALIDO_HORARIO);
    duracao.setValor(VALOR_VALIDO_DURACAO);
    preco.setValor(VALOR_VALIDO_PRECO);
    aval.setValor(VALOR_VALIDO_AVALIACAO);
    nome.setValor(VALOR_VALIDO_NOME);
    data.setData(VALOR_VALIDO_DATA);

    atividade->setCode(code);
    atividade->setHorario(hora);
    atividade->setDuracao(duracao);
    atividade->setPreco(preco);
    atividade->setAval(aval);
    atividade->setNome(nome);
    atividade->setData(data);
    
    /*metodo entidade dps metodo dominio*/
    if (atividade->getCode().getValor() != (VALOR_VALIDO_CODIGO))
        estado = FALHA;     
    if (atividade->getHorario().getHorario() != (VALOR_VALIDO_HORARIO))
        estado = FALHA;     
    if (atividade->getDuracao().getValor() != (VALOR_VALIDO_DURACAO))
        estado = FALHA;     
    if (atividade->getPreco().getValor() != (VALOR_VALIDO_PRECO))
        estado = FALHA;     
    if (atividade->getAval().getValor() != (VALOR_VALIDO_AVALIACAO))
        estado = FALHA;     
    if (atividade->getNome().getValor() != (VALOR_VALIDO_NOME))
        estado = FALHA;     
    if (atividade->getData().getData() != (VALOR_VALIDO_DATA))
        estado = FALHA;
    
}


int TUAtividade::run()
{
    setUp();
    testarCenario();
    tearDown();
    return estado;
}