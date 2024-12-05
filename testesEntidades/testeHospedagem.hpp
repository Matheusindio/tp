#include "../entidades/hospedagem.hpp"
#include "../dominios/codigo.hpp"
#include "../dominios/nome.hpp"
#include "../dominios/dinheiro.hpp"
#include "../dominios/avaliacao.hpp"

class TUHospedagem{
    private:
        const static int VALOR_VALIDO_AVALIACAO = 5;
        const std::string VALOR_VALIDO_NOME = "macacolol";
        const std::string VALOR_VALIDO_CODIGO = "012345";
        const float VALOR_VALIDO_DINHEIRO = 2.000;
        Hospedagem *hospedagem;
        int estado; 
        void setUp();
        void tearDown();
        void testarCenario();

    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
}