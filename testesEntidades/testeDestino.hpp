#ifndef TESTE_DESTINO_HPP_INCLUDED
#define TESTE_DESTINO_HPP_INCLUDED

#include "../entidades/destino.hpp"
#include "../dominios/nome.hpp"
#include "../dominios/avaliacao.hpp"
#include "../dominios/codigo.hpp"
#include "../dominios/data.hpp"

class TUDestino
{
private:
    const static int VALOR_VALIDO_AVALIACAO = 5;
    const std::string VALOR_VALIDO_NOME = "OLA";
    const std::string VALOR_VALIDO_CODIGO = "123456";
    const std::string VALOR_VALIDO_DATAINICIAL = "01/04/01";
    const std::string VALOR_VALIDO_DATAFINAL = "01/06/01";
    Destino *destino;
    int estado;
    void setUp();
    void tearDown();
    void testarCenario();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};

#endif