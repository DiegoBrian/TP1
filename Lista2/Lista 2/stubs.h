#ifndef STUBS_H_INCLUDED
#define STUBS_H_INCLUDED

#include "interfaces.h"

#include <stdexcept>
#include <iostream>
#include <typeinfo>

using namespace std;

/**
     *  @class StubLNAutenticacao
     *  Declaração de classe stub da interface ILNAutenticacao.
     */

class StubLNAutenticacao:public ILNAutenticacao{

public:

    // Definições de valores a serem usados como gatilhos para notificações de erros.

    static const string TRIGGER_FALHA;
    static const string TRIGGER_ERRO_SISTEMA;

    // Declaração de método previsto na interface.

    ResultadoAutenticacao autenticar(const Apelido&, const Senha&) throw(runtime_error);
};

/**
     *  @class StubLNEstante
     *  Declaração de classe stub da interface ILNEstante.
     */

class StubLNEstante:public ILNEstante{

public:

    // Definições de valores a serem usados como gatilhos para notificações de erros.

    static const string TRIGGER_FALHA;
    static const string TRIGGER_ERRO_SISTEMA;
    static const string TRIGGER_SUCESSO;

    // Declaração de método previsto na interface.

    ResultadoEstante buscar(const Titulo&) throw(runtime_error);
};

/**
     *  @class StubLNUsuarios
     *  Declaração de classe stub da interface ISUsuarios.
     */

class StubLNUsuarios:public ISUsuarios{

public:

    // Definições de valores a serem usados como gatilhos para notificações de erros.

    static const string TRIGGER_FALHA;
    static const string TRIGGER_ERRO_SISTEMA;

    // Declaração de método previsto na interface.

    int cadastrar(const Usuario&) throw(runtime_error);
};


#endif // STUBS_H_INCLUDED

