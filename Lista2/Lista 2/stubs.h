#ifndef STUBS_H_INCLUDED
#define STUBS_H_INCLUDED

#include "interfaces.h"

#include <stdexcept>
#include <iostream>
#include <typeinfo>
#include <list>

using namespace std;

/**
     *  @class StubLNAutenticacao
     *  Declaração de classe stub da interface ILNAutenticacao. Esta classe e responsavel por simular o servico de autenticacao
     *  atuando de acordo com triggers pre-definidos.
     */

class StubLNAutenticacao:public ILNAutenticacao{

public:

    /** Definições de valores a serem usados como gatilhos para notificações de erros.*/

    static const string TRIGGER_FALHA;
    static const string TRIGGER_ERRO_SISTEMA;

    /** Declaração de método previsto na interface.*/

    ResultadoAutenticacao autenticar(const Apelido&, const Senha&) throw(runtime_error);
};

/**
     *  @class StubLNEstante
     *  Declaração de classe stub da interface ILNEstante. Esta classe e responsavel por simular o servico de estantes virtuais
     *  atuando de acordo com triggers pre-definidos.
     */

class StubLNEstante:public ILNEstante{

public:

    /** Definições de valores a serem usados como gatilhos para notificações de erros.*/

    static const string TRIGGER_FALHA;
    static const string TRIGGER_ERRO_SISTEMA;
    static const string TRIGGER_SUCESSO;

    /** Declaração de métodos previstos na interface.*/

    ResultadoBuscaLivro buscarlivro(const Titulo&) throw(runtime_error);
    ResultadoInsercao inserir(const Titulo&, const Nome&, const Data&, const Codigo&, const GeneroLiterario&) throw(runtime_error);
};

/**
     *  @class StubLNUsuarios
     *  Declaração de classe stub da interface ISUsuarios. Esta classe e responsavel por simular o servico de cadastramento de usuarios
     *  atuando de acordo com triggers pre-definidos.
     */

class StubLNUsuarios:public ISUsuarios{

public:

    /** Definições de valores a serem usados como gatilhos para notificações de erros.*/

    static const string TRIGGER_FALHA;
    static const string TRIGGER_ERRO_SISTEMA;

    /** Declaração de método previsto na interface.*/

    int cadastrar(const Usuario&) throw(runtime_error);
};

class ContainerUsuario{

private:

    // Refer�ncia para o container.

    list<Usuario> container;

public:

    // M�todos por meio dos quais s�o solicitados os servi�os.

    ResultadoUsuario incluir(Usuario);

};



#endif // STUBS_H_INCLUDED

