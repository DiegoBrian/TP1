#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"

using namespace std;

// Declaração de classe.

class TUCodigo {

private:

    // Definições de constantes para evitar numeros mágicos.

    const static int VALOR_VALIDO   = 20;
    const static int VALOR_INVALIDO = 30;

    // Referência para o objeto a ser testado.

    Codigo *codigo;

    // Estado do teste.

    int estado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};


#endif // TESTES_H_INCLUDED
