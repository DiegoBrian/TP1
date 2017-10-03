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

    matricula.setValor(123);

    cntr->executar(matricula);

    return 0;
}
