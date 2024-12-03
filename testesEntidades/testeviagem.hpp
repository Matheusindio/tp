#include "../entidades/viagem.hpp"
#include "../dominios/codigo.hpp"
#include "../dominios/nome.hpp"
#include "../dominios/avaliacao.hpp"

class TUViagem
{
private:
    const static int VALOR_VALIDO_AVALIACAO = 5;
    const std::string VALOR_VALIDO_NOME = "QQCOISA";
    const std::string VALOR_VALIDAR_CODIGO = "634321";
    Viagem *viagem;
    int estado;
    void setUp();
    void tearDown();
    void testarCenario();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run(); 
};

