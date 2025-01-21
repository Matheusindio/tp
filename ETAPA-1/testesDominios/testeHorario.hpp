#ifndef TESTE_HORARIO_HPP_INCLUDED
#define TESTE_HORARIO_HPP_INCLUDED
#include <stdexcept>

#include "../dominios/hora.cpp"



using namespace std;

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

#endif