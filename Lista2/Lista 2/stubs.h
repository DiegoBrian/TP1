#ifndef STUBS_H_INCLUDED
#define STUBS_H_INCLUDED

#include "interfaces.h"

#include <stdexcept>
#include <iostream>
#include <typeinfo>

using namespace std;

// Declara��o de classe stub da interface ILNAutenticacao.

class StubLNAutenticacao:public ILNAutenticacao{

public:

    // Defini��es de valores a serem usados como gatilhos para notifica��es de erros.

    static const string TRIGGER_FALHA;
    static const string TRIGGER_ERRO_SISTEMA;

    // Declara��o de m�todo previsto na interface.

    ResultadoAutenticacao autenticar(const Apelido&, const Senha&) throw(runtime_error);
};


class StubLNEstante:public ILNEstante{

public:

    // Defini��es de valores a serem usados como gatilhos para notifica��es de erros.

    static const string TRIGGER_FALHA;
    static const string TRIGGER_ERRO_SISTEMA;

    // Declara��o de m�todo previsto na interface.

    ResultadoEstante buscar(const Titulo&) throw(runtime_error);
};


#endif // STUBS_H_INCLUDED

