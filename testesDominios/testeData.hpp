#ifndef TESTE_DATA_HPP_INCLUDED
#define TESTE_DATA_HPP_INCLUDED
#include <stdexcept>
#include "../dominios/data.cpp"



using namespace std;

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

#endif