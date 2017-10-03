#ifndef STUBS_H_INCLUDED
#define STUBS_H_INCLUDED

#include "Interfaces.h"
#include <stdexcept>
#include <iostream>

using namespace std;

// Declaração de classe stub.

class StubLNGerente:public ILNGerente{  // classe implementa a interface.

public:
    Resultado incluir(const Gerente&) throw(runtime_error);
    Resultado remover(const Matricula&) throw(runtime_error);
    ResultadoGerente pesquisar(const Matricula&) throw(runtime_error);
    Resultado editar(const Gerente&) throw(runtime_error);
};

#endif // STUBS_H_INCLUDED
