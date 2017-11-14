#ifndef COMANDOS_H_INCLUDED
#define COMANDOS_H_INCLUDED

#include "interfaces.h"
#include "dominios.h"
#include "entidades.h"

#include <stdexcept>
#include <iostream>
#include <cstdlib>


class ComandoIUGerente {

public:

    // Método por meio do qual é solicitada a execução do comando.

    virtual void executar(ILNGerente*) throw(runtime_error) = 0;

    // Método destrutor virtual.

    virtual ~ComandoIUGerente(){}
};

class ComandoIUGerenteIncluir:public ComandoIUGerente {

public:

    // Método por meio do qual é solicitada a execução do comando.

    void executar(ILNGerente*) throw(runtime_error);
};

class ComandoIUGerenteRemover:public ComandoIUGerente {

    // Método por meio do qual é solicitada a execução do comando.

    void executar(ILNGerente*) throw(runtime_error);
};

class ComandoIUGerentePesquisar:public ComandoIUGerente {

    // Método por meio do qual é solicitada a execução do comando.

    void executar(ILNGerente*) throw(runtime_error);
};

class ComandoIUGerenteEditar:public ComandoIUGerente {

    // Método por meio do qual é solicitada a execução do comando.

    void executar(ILNGerente*) throw(runtime_error);
};


#endif // COMANDOS_H_INCLUDED

