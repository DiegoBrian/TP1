#ifndef MIUAUTENTICACAO_H_INCLUDED
#define MIUAUTENTICACAO_H_INCLUDED

#include "interfaces.h"
#include "Dominio.h"

#include <stdexcept>
#include <iostream>

using namespace std;

// Declaracao de classe controladora de interacao para o servico de autenticacao.

/**
     *  @class CntrIUAutenticacao
     *  Classe controladora de interacao para o servico de autenticacao. Esta classe implementa a interface
     *  IUAutenticacao. Dentre suas atribuicoes esta fazer a ligacao entre a camada de apresentacao e servico do servico
     *  de autenticacao
     */

class CntrIUAutenticacao:public IUAutenticacao {

private:

    // Referencia para servidor.

    ILNAutenticacao *cntrLNAutenticacao;

public:

    /** Declaração de método previsto na interface.*/
    ResultadoAutenticacao autenticar() throw(runtime_error);

    /** Declaração de método previsto na interface.*/
    void setCntrLNAutenticacao(ILNAutenticacao*);
};


void inline CntrIUAutenticacao::setCntrLNAutenticacao(ILNAutenticacao *cntrLNAutenticacao){
        this->cntrLNAutenticacao = cntrLNAutenticacao;
}

/**
     *  @class CntrIUEstante
     *  Classe controladora de interacao para o servico de estantes virtuais. Esta classe implementa a interface
     *  IUEstante. Dentre suas atribuicoes esta fazer a ligacao entre a camada de apresentacao e servico do servico
     *  de estantes virtuais
     */



class CntrIUEstante:public IUEstante {

private:

    // Refer�ncia para servidor.

    ILNEstante *cntrLNEstante;

public:

    /** Declaração de método previsto na interface.*/
    ResultadoEstante buscar() throw(runtime_error);

    /** Declaração de método previsto na interface.*/
    void setCntrLNEstante(ILNEstante*);
};


void inline CntrIUEstante::setCntrLNEstante(ILNEstante *cntrLNEstante){
        this->cntrLNEstante = cntrLNEstante;
}

/**
     *  @class CntrIUEstante
     *  Classe controladora de interação para o serviço de cadastro de usuário. Esta classe implementa a interface
     *  IUUsuarios. Dentre suas atribuicoes esta fazer a ligacao entre a camada de apresentacao e servico do servico
     *  de cadastro de usuarios
     */

// 

class CntrIUUsuarios:public IUUsuarios {

private:

    // Referência para servidor.

    ISUsuarios *cntrSUsuarios;

    // Declarações de possíveis resultados.

    const static int SUCESSO = 0;
    const static int FALHA   = 1;

public:

    /** Declaração de método previsto na interface.*/
    int cadastrar() throw(runtime_error);

    /** Declaração de método previsto na interface.*/
    void setCntrSUsuarios(ISUsuarios*);
};


void inline CntrIUUsuarios::setCntrSUsuarios(ISUsuarios *cntrSUsuarios){
        this->cntrSUsuarios = cntrSUsuarios;
}

#endif // CONTROLADORAS_H_INCLUDED


