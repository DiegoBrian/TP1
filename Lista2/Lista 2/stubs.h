#ifndef STUBS_H_INCLUDED
#define STUBS_H_INCLUDED

#include "interfaces.h"

#include <stdexcept>
#include <iostream>
#include <typeinfo>

using namespace std;

/**
     *  @class StubLNAutenticacao
     *  Declara��o de classe stub da interface ILNAutenticacao. Esta classe e responsavel por simular o servico de autenticacao
     *  atuando de acordo com triggers pre-definidos.
     */

class StubLNAutenticacao:public ILNAutenticacao{

public:

    /** Defini��es de valores a serem usados como gatilhos para notifica��es de erros.*/

    static const string TRIGGER_FALHA;
    static const string TRIGGER_ERRO_SISTEMA;

    /** Declara��o de m�todo previsto na interface.*/

    ResultadoAutenticacao autenticar(const Apelido&, const Senha&) throw(runtime_error);
};

/**
     *  @class StubLNEstante
     *  Declara��o de classe stub da interface ILNEstante. Esta classe e responsavel por simular o servico de estantes virtuais
     *  atuando de acordo com triggers pre-definidos.
     */

class StubLNEstante:public ILNEstante{

public:

    /** Defini��es de valores a serem usados como gatilhos para notifica��es de erros.*/

    static const string TRIGGER_FALHA;
    static const string TRIGGER_ERRO_SISTEMA;
    static const string TRIGGER_SUCESSO;

    /** Declara��o de m�todo previsto na interface.*/

    ResultadoEstante buscar(const Titulo&) throw(runtime_error);
};

/**
     *  @class StubLNUsuarios
     *  Declara��o de classe stub da interface ISUsuarios. Esta classe e responsavel por simular o servico de cadastramento de usuarios
     *  atuando de acordo com triggers pre-definidos.
     */

class StubLNUsuarios:public ISUsuarios{

public:

    /** Defini��es de valores a serem usados como gatilhos para notifica��es de erros.*/

    static const string TRIGGER_FALHA;
    static const string TRIGGER_ERRO_SISTEMA;

    /** Declara��o de m�todo previsto na interface.*/

    int cadastrar(const Usuario&) throw(runtime_error);
};


#endif // STUBS_H_INCLUDED

