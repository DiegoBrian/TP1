#ifndef STUBS_H_INCLUDED
#define STUBS_H_INCLUDED

#include "Interfaces.h"
#include <stdexcept>
#include <iostream>

using namespace std;

// Declara��o de classe stub da interface ILNAutenticacao.

class StubLNAutenticacao:public ILNAutenticacao{

public:

    // Defini��es de valores a serem usados como gatilhos para notifica��es de erros.

    const static int TRIGGER_FALHA        = 67890;
    const static int TRIGGER_ERRO_SISTEMA = 78901;

    // Declara��o de m�todo previsto na interface.

    Resultado autenticar(const Matricula&, const Senha&) throw(runtime_error);
};

// Declara��o de classe stub da interface ILNGerente.

class StubLNGerente:public ILNGerente{  // classe implementa a interface.

public:

    // Defini��es de valores a serem usados como gatilhos para notifica��es de erros.

    const static int TRIGGER_FALHA        = 67890;
    const static int TRIGGER_ERRO_SISTEMA = 78901;

    Resultado incluir(const Gerente&) throw(runtime_error);
    Resultado remover(const Matricula&) throw(runtime_error);
    ResultadoGerente pesquisar(const Matricula&) throw(runtime_error);
    Resultado editar(const Gerente&) throw(runtime_error);
};

#endif // STUBS_H_INCLUDED
