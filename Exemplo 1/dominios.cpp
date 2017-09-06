#include "dominios.h"

//Defini��es de constantes.

// Defini��es de m�todos.

void Codigo::validar(int codigo) throw (invalid_argument){

    // Lan�a exce��o se valor for menor que o limite definido.

    if (codigo > LIMITE)
        throw invalid_argument("Argumento invalido.");
}

void Codigo::setCodigo(int codigo) throw (invalid_argument){
    validar(codigo);
    this->codigo = codigo;
}
