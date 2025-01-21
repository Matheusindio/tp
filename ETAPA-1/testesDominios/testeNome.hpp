#ifndef TESTE_NOME_HPP_INCLUDED
#define TESTE_NOME_HPP_INCLUDED
#include <stdexcept>
#include "../dominios/nome.cpp"


using namespace std;


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

#endif