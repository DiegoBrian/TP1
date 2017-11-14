#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"
#include <stdexcept>

using namespace std;

// Declara��es adiantadas.

class ILNAutenticacao;
class ILNGerente;

// Declara��o de interface para servi�o de autentica��o na camada de apresenta��o.

class IUAutenticacao {
public:

    // M�todo por meio do qual � solicitado o servi�o.

    virtual ResultadoAutenticacao autenticar() throw(runtime_error) = 0;

    // M�todo por meio do qual � estabelecida liga��o (link) com a controladora na camada de servi�o.

    virtual void setCntrLNAutenticacao(ILNAutenticacao *) = 0;

    // M�todo destrutor virtual.

    virtual ~IUAutenticacao(){}
};

// Declara��o de interface para servi�o de autentica��o na camada de servi�o.

class ILNAutenticacao {
public:

    // M�todo por meio do qual � solicitado o servi�o.

    virtual Resultado autenticar(const Matricula&, const Senha&) throw(runtime_error)= 0;

    // M�todo destrutor virtual.

    virtual ~ILNAutenticacao(){}
};


// Declara��o de interface da camada de apresenta��o.

class IUGerente {
public:

    // M�todo por meio do qual � solicitado o servi�o.

    virtual void executar(const Matricula&) throw(runtime_error) = 0;

    // M�todo por meio do qual � estabelecida liga��o (link) com a controladora de neg�cio.

    virtual void setCntrLNGerente(ILNGerente *) = 0;

    // M�todo destrutor virtual.

    virtual ~IUGerente(){}
};

// Declara��o de interface da camada de neg�cio
// ------------------------------------------------------------------

class ILNGerente {

public:

    // M�todos por meio dos quais s�o solicitados os servi�os.

    virtual Resultado incluir(const Gerente&) throw(runtime_error) = 0;
    virtual Resultado remover(const Matricula&) throw(runtime_error) = 0;
    virtual ResultadoGerente pesquisar(const Matricula&) throw(runtime_error) = 0;
    virtual Resultado editar(const Gerente&) throw(runtime_error) = 0;

    // M�todo destrutor virtual.

    virtual ~ILNGerente(){}
};

#endif // INTERFACES_H_INCLUDED
