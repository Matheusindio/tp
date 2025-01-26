#ifndef TESTE_CODIGO_HPP_INCLUDED
#define TESTE_CODIGO_HPP_INCLUDED
#include <stdexcept>
#include "../dominios/codigo.cpp"


using namespace std;

// TESTE CÓDIGO

class TUCodigo
{
    private:
        const std::string VALOR_VALIDO = "AABBCC";
        const std::string VALOR_INVALIDO = "AABBCC**";
        Codigo *codigo;
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