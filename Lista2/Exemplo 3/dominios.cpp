#include "dominios.h"


// Definições de métodos da classe Matricula.

void Matricula::validar(int valor) throw (invalid_argument){

    // Lança exceção se valor for maior que o limite definido.

    if (valor > LIMITE)
        throw invalid_argument("Argumento invalido.");
}

// Ilustra método que nao trata exceção lançada.

void Matricula::setValor(int valor) throw (invalid_argument){
    validar(valor);
    this->valor = valor;
}
