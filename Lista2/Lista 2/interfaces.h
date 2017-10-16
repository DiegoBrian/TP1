#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "Dominio.h"
#include "Entidades.h"

#include <stdexcept>

using namespace std;

// Declaração adiantada.

class ILNAutenticacao;

/**
     *  @class IUAutenticacao
     *  Declaração de interface para serviço de autenticação na camada de apresentacao
     */


class IUAutenticacao {
public:

    // Método por meio do qual é solicitada autenticacao.

    virtual ResultadoAutenticacao autenticar() throw(runtime_error) = 0;

    // Método por meio do qual é estabelecida ligação (link) com a controladora na camada de serviço.

    virtual void setCntrLNAutenticacao(ILNAutenticacao *) = 0;
};


/**
     *  @class ILNAutenticacao
     *  Declaração de interface para serviço de autenticação na camada de serviço.
     */


class ILNAutenticacao {
public:
    virtual ResultadoAutenticacao autenticar(const Apelido&, const Senha&) throw(runtime_error)= 0;
};



class ILNEstante;


/**
     *  @class IUEstante
     *  Declaração de interface para serviço de estantes virtuais na camada de apresentação.
     */


class IUEstante {
public:

    // Método por meio do qual é solicitada Estante.

    virtual ResultadoEstante buscar() throw(runtime_error) = 0;

    // Método por meio do qual é estabelecida ligação (link) com a controladora na camada de serviço.

    virtual void setCntrLNEstante(ILNEstante *) = 0;
};

/**
     *  @class ILNEstante
     *  Declaração de interface para serviço de estantes virtuais na camada de serviço.
     */

class ILNEstante {
public:
    virtual ResultadoEstante buscar(const Titulo&) throw(runtime_error)= 0;
};

// Declaração adiantada.

class ISUsuarios;

/**
     *  @class IUUsuarios
     *  Declaração de interface para serviço de cadastro de usuário na camada de apresentação.
     */


class IUUsuarios {
public:

    // Método por meio do qual é solicitada autenticacao.

    virtual int cadastrar() throw(runtime_error) = 0;

    // Método por meio do qual é estabelecida ligação (link) com a controladora na camada de serviço.

    virtual void setCntrSUsuarios(ISUsuarios *) = 0;
};

/**
     *  @class ISUsuarios
     *  Declaração de interface para serviço de cadastro de usuário na camada de serviço.
     */

class ISUsuarios {
public:
    virtual int cadastrar(const Usuario&) throw(runtime_error)= 0;
};

#endif // INTERFACES_H_INCLUDED

