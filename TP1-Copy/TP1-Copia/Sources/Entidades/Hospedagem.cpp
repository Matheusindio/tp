#include "../../Includes/Entidades/Hospedagem.hpp"

Hospedagem::Hospedagem(const Codigo &codigo, const Nome &nome, const Dinheiro &ValorDiaria, const Avaliacao &avaliacao)
    : codigo(codigo), nome(nome), ValorDiaria(ValorDiaria), avaliacao(avaliacao) {}

void Hospedagem::set(const Dominio &dominio, string NomeProprio)
{
    if (NomeProprio == "codigo")
    {
        this->codigo = static_cast<const Codigo &>(dominio);
    }
    else if (NomeProprio == "nome")
    {
        this->nome = static_cast<const Nome &>(dominio);
    }
    else if (NomeProprio == "valordiaria")
    {
        this->ValorDiaria = static_cast<const Dinheiro &>(dominio);
    }
    else if (NomeProprio == "avaliacao")
    {
        this->avaliacao = static_cast<const Avaliacao &>(dominio);
    }
    else
    {
        throw invalid_argument("Tipo desconhecido para o domínio fornecido");
    }
}

const Dominio &Hospedagem::get(const string NomeProprio) const
{
    if (NomeProprio == "codigo")
    {
        return this->codigo;
    }
    else if (NomeProprio == "nome")
    {
        return this->nome;
    }
    else if (NomeProprio == "valordiaria")
    {
        return this->ValorDiaria;
    }
    else if (NomeProprio == "avaliacao")
    {
        return this->avaliacao;
    }
    else
    {
        throw invalid_argument("Propriedade desconhecida");
    }
}
