#include <iostream>
#include <stdexcept>

using namespace std;

#define TAMANHO_MAXIMO 5

class Nome {
private:
    string valor; // Atributo para armazenar o valor da classe

    void validar(string valor) {
        // Método validar lança exceção se o tamanho do valor for superior a TAMANHO_MAXIMO
        if (valor.length() > TAMANHO_MAXIMO) {
            throw invalid_argument("Erro: Tamanho do valor excede o limite permitido.\n");
        }
    }

public:
    void set(string valor) {
        // Armazena o valor passado como parâmetro se validar não lançar exceção
        validar(valor);
        this->valor = valor;
    }

    string get() {
        // Retorna o valor do atributo da classe
        return valor;
    }
};

int main() {
    string dadoA, dadoB;

    cin >> dadoA; // Entrada do primeiro dado
    cin >> dadoB; // Entrada do segundo dado

    Nome nome;

    try {
        nome.set(dadoA); // Tenta armazenar o primeiro dado
    } catch (invalid_argument &excessao) {
        cout << excessao.what();
    }

    try {
        nome.set(dadoB); // Tenta armazenar o segundo dado
    } catch (invalid_argument &excessao) {
        cout << excessao.what();
    }

    return 0;
}
