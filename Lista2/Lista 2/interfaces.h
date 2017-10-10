#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "Dominio.h"
#include "entidades.h"

#include <stdexcept>

using namespace std;

// Declara��o adiantada.

class ILNAutenticacao;

// Declara��o de interface para servi�o de autentica��o na camada de apresenta��o.

class IUAutenticacao {
public:

    // M�todo por meio do qual � solicitada autenticacao.

    virtual ResultadoAutenticacao autenticar() throw(runtime_error) = 0;

    // M�todo por meio do qual � estabelecida liga��o (link) com a controladora na camada de servi�o.

    virtual void setCntrLNAutenticacao(ILNAutenticacao *) = 0;
};

// Declara��o de interface para servi�o de autentica��o na camada de servi�o.

class ILNAutenticacao {
public:
    virtual ResultadoAutenticacao autenticar(const Apelido&, const Senha&) throw(runtime_error)= 0;
};

#endif // INTERFACES_H_INCLUDED

