// Exemplos desenvolvidos para ilustrar a sintaxe da linguagem.

#include <iostream>

#include "dominios.h"
#include "entidades.h"
#include "testes.h"

using namespace std;

int main()
{

    TUCodigo teste;

    switch(teste.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO";
                                break;
        case TUCodigo::FALHA  : cout << "FALHA";
                                break;
    }

    return 0;
}
