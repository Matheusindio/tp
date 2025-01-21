#ifndef TESTE_DINHEIRO_HPP_INCLUDED
#define TESTE_DINHEIRO_HPP_INCLUDED
#include <stdexcept>
#include "../dominios/dinheiro.cpp"



using namespace std;

//Teste Dinheiro

class TUDinheiro
{
    private:
        const static int VALOR_VALIDO = 4;
        const static int VALOR_INVALIDO = -1;
        Dinheiro *dinheiro;
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