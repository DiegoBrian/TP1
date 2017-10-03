#include "dominios.h"

//Definições de constantes.

// Definições de métodos.

void Codigo::validar(int codigo) throw (invalid_argument){

    // Lança exceção se valor for menor que o limite definido.

    if (codigo > LIMITE)
        throw invalid_argument("Argumento invalido.");
}

void Codigo::setCodigo(int codigo) throw (invalid_argument){
    validar(codigo);
    this->codigo = codigo;
}
