#ifndef TESTE_CONTA_HPP_INCLUDED
#define TESTE_CONTA_HPP_INCLUDED

#include "../entidades/conta.hpp"
#include "../dominios/codigo.hpp"
#include "../dominios/senha.hpp"

class TUConta{
    private:
        const std::string VALOR_VALIDO_CODIGO = "012345";
        const std::string VALOR_VALIDO_SENHA = "ABCD1";
        Conta *conta;
        int estado;
        void setUp();
        void tearDown();
        void testarCenario();

    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

#endif
