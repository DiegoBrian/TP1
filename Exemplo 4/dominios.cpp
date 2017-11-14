#include "dominios.h"


// Defini��es de m�todos da classe Matricula.

void Matricula::validar(int valor) throw (invalid_argument){

    // Lan�a exce��o se valor for igual ao valor definido.

    if (valor == MATRICULA_INVALIDA)
        throw invalid_argument("Argumento invalido.");
}

// Ilustra m�todo que nao trata exce��o lan�ada.

void Matricula::setValor(int valor) throw (invalid_argument){
    validar(valor);
    this->valor = valor;
}

// Defini��es de m�todos da classe Senha.

void Senha::validar(int valor) throw (invalid_argument) {
    if(valor == SENHA_INVALIDA)
        throw invalid_argument("Erro parametro.");
}

void Senha::setValor(int valor) throw (invalid_argument) {
    validar(valor);
    this->valor = valor;
}
