// Exemplos desenvolvidos para ilustrar a sintaxe da linguagem.

#include <stdexcept>
#include <iostream>
#include <string>

#include "dominios.h"
#include "entidades.h"
#include "interfaces.h"
#include "controladoras.h"
#include "stubs.h"

using namespace std;

int main()
{

    IUGerente   *cntr;
    ILNGerente  *stub;

    cntr = new CntrIUGerente();
    stub = new StubLNGerente();

    cntr->setCntrLNGerente(stub);

    Matricula matricula;

    // Informa matrícula do usuário autenticado pelo sistema.

    matricula.setValor(123);

    cntr->executar(matricula);

    delete cntr;
    delete stub;

    return 0;
}
