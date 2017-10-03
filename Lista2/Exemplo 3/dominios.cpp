#include "dominios.h"


// Defini��es de m�todos da classe Matricula.

void Matricula::validar(int valor) throw (invalid_argument){

    // Lan�a exce��o se valor for maior que o limite definido.

    if (valor > LIMITE)
        throw invalid_argument("Argumento invalido.");
}

// Ilustra m�todo que nao trata exce��o lan�ada.

void Matricula::setValor(int valor) throw (invalid_argument){
    validar(valor);
    this->valor = valor;
}
