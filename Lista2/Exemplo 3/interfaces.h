#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"
#include <stdexcept>

using namespace std;

// Declara��o adiantada.

class ILNGerente;

// Declara��o de interface da camada de apresenta��o.

class IUGerente {
public:

    // M�todo por meio do qual � solicitada autenticacao.

    virtual void executar(const Matricula&) = 0;

    // M�todo por meio do qual � estabelecida liga��o (link) com a controladora de neg�cio.

    virtual void setCntrLNGerente(ILNGerente *) = 0;
};

// Declara��o de interface da camada de neg�cio
// ------------------------------------------------------------------

class ILNGerente {
public:
    virtual Resultado incluir(const Gerente&) throw(runtime_error) = 0;
    virtual Resultado remover(const Matricula&) throw(runtime_error) = 0;
    virtual ResultadoGerente pesquisar(const Matricula&) throw(runtime_error) = 0;
    virtual Resultado editar(const Gerente&) throw(runtime_error) = 0;
};

#endif // INTERFACES_H_INCLUDED
