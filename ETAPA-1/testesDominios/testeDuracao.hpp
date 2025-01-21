#ifndef TESTES_DURACAO_INCLUDED
#define TESTE_DURACAO_HPP_INCLUDED
#include <stdexcept>
#include "../dominios/duracao.cpp"



using namespace std;


// Teste Duração

class TUDuracao
{
    private:
        const static int VALOR_VALIDO = 4;
        const static int VALOR_INVALIDO = -1;
        Duracao *duracao;
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