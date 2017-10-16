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
     *  Interface para servi�o de autentica��o na camada de apresentacao
     */


class IUAutenticacao {
public:

    /** M�todo por meio do qual � solicitada autenticacao.*/

    virtual ResultadoAutenticacao autenticar() throw(runtime_error) = 0;

    /** M�todo por meio do qual � estabelecida liga��o (link) com a controladora na camada de servi�o.*/

    virtual void setCntrLNAutenticacao(ILNAutenticacao *) = 0;
};


/**
     *  @class ILNAutenticacao
     *  Interface para servi�o de autentica��o na camada de servi�o.
     */


class ILNAutenticacao {
public:
    virtual ResultadoAutenticacao autenticar(const Apelido&, const Senha&) throw(runtime_error)= 0;
};



class ILNEstante;


/**
     *  @class IUEstante
     *  Interface para servi�o de estantes virtuais na camada de apresenta��o.
     */


class IUEstante {
public:

    /** M�todo por meio do qual � solicitada BuscaLivro por livro em Estante. */

    virtual ResultadoBuscaLivro buscarlivro() throw(runtime_error) = 0;

    /** M�todo por meio do qual � solicitada a insercao de um livro na Estante. */

    virtual ResultadoInsercao inserir() throw(runtime_error) = 0;

    /** M�todo por meio do qual � estabelecida liga��o (link) com a controladora na camada de servi�o.*/

    virtual void setCntrLNEstante(ILNEstante *) = 0;

};

/**
     *  @class ILNEstante
     *  Interface para servi�o de estantes virtuais na camada de servi�o.
     */

class ILNEstante {
public:
    virtual ResultadoBuscaLivro buscarlivro(const Titulo&) throw(runtime_error)= 0;
    virtual ResultadoInsercao inserir(const Titulo&, const Nome&, const Data&, const Codigo&, const GeneroLiterario&) throw(runtime_error)= 0;
};

// Declara��o adiantada.

class ISUsuarios;

/**
     *  @class IUUsuarios
     *  Interface para servi�o de cadastro de usu�rio na camada de apresenta��o.
     */


class IUUsuarios {
public:

    /** M�todo por meio do qual � solicitado cadastramento.*/

    virtual int cadastrar() throw(runtime_error) = 0;

    /** M�todo por meio do qual � estabelecida liga��o (link) com a controladora na camada de servi�o.*/

    virtual void setCntrSUsuarios(ISUsuarios *) = 0;
};

/**
     *  @class ISUsuarios
     *  Interface para servi�o de cadastro de usu�rio na camada de servi�o.
     */

class ISUsuarios {
public:
	/** M�todo por meio do qual � solicitado cadastramento.*/
    virtual int cadastrar(const Usuario&) throw(runtime_error)= 0;
};

#endif // INTERFACES_H_INCLUDED

