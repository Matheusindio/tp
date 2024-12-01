#ifndef ATIVIDADE_HPP_INCLUDED
#define ATIVIDADE_HPP_INCLUDED
#include "../dominios/data.hpp"
#include "../dominios/dinheiro.hpp"
#include "../dominios/duracao.hpp"
#include "../dominios/hora.hpp"
#include "../dominios/nome.hpp"
#include "../dominios/codigo.hpp"
#include "../dominios/avaliacao.hpp"
class Atividade
{
private:
    Codigo code;
    Horario horario;
    Duracao duracao;
    Dinheiro preco;
    Avaliacao aval;
    Nome nome;
    Data data;
public:
    void setCode(const Codigo& code);
    Codigo getCode() const;
    void setHorario(const Horario& horario);
    Horario getHorario() const;
    void setDuracao(const Duracao& duracao);
    Duracao getDuracao() const;
    void setPreco(const Dinheiro& preco);
    Dinheiro getPreco() const;
    void setAval(const Avaliacao& aval);
    Avaliacao getAval() const;
    void setNome(const Nome& nome);
    Nome getNome() const;
    void setData(const Data& data);
    Data getData() const;

};

inline void Atividade::setCode(const Codigo& code)
{
    this->code = code;
}

inline Codigo Atividade::getCode() const{return code;}

inline void Atividade::setHorario(const Horario& horario)
{
    this->horario = horario;
}

inline Horario Atividade::getHorario() const {return horario;}

inline void Atividade::setDuracao(const Duracao& duracao)
{
    this->duracao = duracao;
}

inline Duracao Atividade::getDuracao() const{return duracao;}

inline void Atividade::setPreco(const Dinheiro& preco)
{
    this->preco = preco;
}

inline Dinheiro Atividade::getPreco() const {return preco;}

inline void Atividade::setAval(const Avaliacao& aval)
{
    this->aval = aval;
}

inline Avaliacao Atividade::getAval() const{return aval;}

inline void Atividade::setNome(const Nome& nome)
{
    this->nome = nome;
}

inline Nome Atividade::getNome() const {return nome;}

inline void Atividade::setData(const Data& data)
{
    this->data = data;
}

inline Data Atividade::getData() const {return data;}


#endif