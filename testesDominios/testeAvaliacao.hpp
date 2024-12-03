#ifndef TESTE_AVALIACAO_HPP_INCLUDED
#define TESTE_AVALIACAO_HPP_INCLUDED
#include <stdexcept>
#include "../dominios/avaliacao.cpp"



using namespace std;

// TESTE AVALIAÇÃO

class TUAvaliacao
{
    private:
        const static int VALOR_VALIDO = 4;
        const static int VALOR_INVALIDO = 9;
        Avaliacao *avaliacao;
        int estado;
        void setUp();
        void tearDown();
        void TestarCenarioValorValido();
        void TestarCenarioValorInvalido();

    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

#endif