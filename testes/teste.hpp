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

//Teste Data

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

//Teste Hora

class TUHorario
{
    private:
        const std::string VALOR_VALIDO = "19:20";
        const std::string VALOR_INVALIDO = "25:90";
        Horario *horario;
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

//Teste Nome

class TUNome
{
    private:
        const std::string VALOR_VALIDO = "RodolfoLandim";
        const std::string VALOR_INVALIDO = "RodolfoLandimRodolfoLandimRodolfoLandimRodolfoLandimRodolfoLandim";
        Nome *nome;
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

//Teste Senha

class TUSenha
{
    private:
        const std::string VALOR_VALIDO = "12380";
        const std::string VALOR_INVALIDO = "54321";
        Senha *senha;
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
