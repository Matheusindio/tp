#ifndef TESTES_HPP_INCLUDED
#define TESTES_HPP_INCLUDED
#include <stdexcept>
#include "../dominios/avaliacao.cpp"
#include "../dominios/codigo.cpp"
#include "../dominios/senha.cpp"
#include "../dominios/data.cpp"
#include "../dominios/dinheiro.cpp"
#include "../dominios/duracao.cpp"
#include "../dominios/hora.cpp"
#include "../dominios/nome.cpp"


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

class TUData
{
    private:
        const std::string VALOR_VALIDO = "02/07/04";
        const std::string VALOR_INVALIDO = "40/07/04";
        Data *data;
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
