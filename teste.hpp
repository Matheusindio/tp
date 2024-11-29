#ifndef TESTES_HPP_INCLUDED
#define TESTES_HPP_INCLUDED
#include <stdexcept>
#include "dominios/avaliacao.cpp"
#include "dominios/dinheiro.cpp"
#include "dominios/codigo.cpp"
#include "dominios/duracao.cpp"
#include "dominios/hora.cpp"
#include "dominios/senha.cpp"
#include "dominios/nome.cpp"
#include "dominios/data.cpp"

using namespace std;

class TUAvaliacao 
{
    private:
        const static int VALOR_VALIDO = 3;
        const static int VALOR_INVALIDO = 30;
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