#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "Dominio.h"
#include "Entidades.h"

#include <stdexcept>

using namespace std;

// Declara��o adiantada.

class ILNAutenticacao;

/**
     *  @class IUAutenticacao
     *  Declara��o de interface para servi�o de autentica��o na camada de apresentacao
     */


class IUAutenticacao {
public:

    // M�todo por meio do qual � solicitada autenticacao.

    virtual ResultadoAutenticacao autenticar() throw(runtime_error) = 0;

    // M�todo por meio do qual � estabelecida liga��o (link) com a controladora na camada de servi�o.

    virtual void setCntrLNAutenticacao(ILNAutenticacao *) = 0;
};


/**
     *  @class ILNAutenticacao
     *  Declara��o de interface para servi�o de autentica��o na camada de servi�o.
     */


class ILNAutenticacao {
public:
    virtual ResultadoAutenticacao autenticar(const Apelido&, const Senha&) throw(runtime_error)= 0;
};



class ILNEstante;


/**
     *  @class IUEstante
     *  Declara��o de interface para servi�o de estantes virtuais na camada de apresenta��o.
     */


class IUEstante {
public:

    // M�todo por meio do qual � solicitada Estante.

    virtual ResultadoEstante buscar() throw(runtime_error) = 0;

    // M�todo por meio do qual � estabelecida liga��o (link) com a controladora na camada de servi�o.

    virtual void setCntrLNEstante(ILNEstante *) = 0;
};

/**
     *  @class ILNEstante
     *  Declara��o de interface para servi�o de estantes virtuais na camada de servi�o.
     */

class ILNEstante {
public:
    virtual ResultadoEstante buscar(const Titulo&) throw(runtime_error)= 0;
};

// Declara��o adiantada.

class ISUsuarios;

/**
     *  @class IUUsuarios
     *  Declara��o de interface para servi�o de cadastro de usu�rio na camada de apresenta��o.
     */


class IUUsuarios {
public:

    // M�todo por meio do qual � solicitada autenticacao.

    virtual int cadastrar() throw(runtime_error) = 0;

    // M�todo por meio do qual � estabelecida liga��o (link) com a controladora na camada de servi�o.

    virtual void setCntrSUsuarios(ISUsuarios *) = 0;
};

/**
     *  @class ISUsuarios
     *  Declara��o de interface para servi�o de cadastro de usu�rio na camada de servi�o.
     */

class ISUsuarios {
public:
    virtual int cadastrar(const Usuario&) throw(runtime_error)= 0;
};

#endif // INTERFACES_H_INCLUDED

