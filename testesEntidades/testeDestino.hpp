#include "../entidades/destino.hpp"
#include "../dominios/nome.hpp"
#include "../dominios/avaliacao.hpp"
#include "../dominios/codigo.hpp"
#include "../dominios/data.hpp"

class TUDestino
{
private:
    const static int VALOR_VALIDO_AVALIACAO = 5;
    const std::string VALOR_VALIDO_NOME = "cleiton";
    const std::string VALOR_VALIDO_CODIGO = "123456";
    const std::string VALOR_VALIDO_DATAINICIAL = "01/01/01";
    const std::string VALOR_VALIDO_DATAFINAL = "01/02/01";
    Destino *destino;
    int estado;
    void setUp();
    void tearDown();
    void testarCenario();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};
