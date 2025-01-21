#ifndef TESTE_ATIVIDADE_HPP_INCLUDED
#define TESTE_ATIVIDADE_HPP_INCLUDED

#include "../dominios/data.hpp"
#include "../dominios/dinheiro.hpp"
#include "../dominios/duracao.hpp"
#include "../dominios/hora.hpp"
#include "../dominios/nome.hpp"
#include "../dominios/codigo.hpp"
#include "../dominios/avaliacao.hpp"
#include "../entidades/atividade.hpp"

class TUAtividade {
private:
    const std::string VALOR_VALIDO_CODIGO = "645213"; 
    const std::string VALOR_VALIDO_HORARIO = "20:00"; 
    const static int VALOR_VALIDO_DURACAO = 10; 
    const float VALOR_VALIDO_PRECO = 100; 
    const static int VALOR_VALIDO_AVALIACAO = 4; 
    const std::string VALOR_VALIDO_NOME = "SPFC"; 
    const std::string VALOR_VALIDO_DATA = "02/07/04"; 
    Atividade * atividade;               
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