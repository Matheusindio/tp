#ifndef TESTES_HPP_INCLUDED
#define TESTES_HPP_INCLUDED
#include <stdexcept>
#include "../dominios/senha.cpp"


using namespace std;

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
