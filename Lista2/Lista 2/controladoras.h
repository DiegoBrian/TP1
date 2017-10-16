#ifndef MIUAUTENTICACAO_H_INCLUDED
#define MIUAUTENTICACAO_H_INCLUDED

#include "interfaces.h"
#include "Dominio.h"

#include <stdexcept>
#include <iostream>

using namespace std;

// Declara��o de classe controladora de intera��o para o servi�o de autentica��o.

class CntrIUAutenticacao:public IUAutenticacao {

private:

    // Refer�ncia para servidor.

    ILNAutenticacao *cntrLNAutenticacao;

public:

    ResultadoAutenticacao autenticar() throw(runtime_error);

    void setCntrLNAutenticacao(ILNAutenticacao*);
};


void inline CntrIUAutenticacao::setCntrLNAutenticacao(ILNAutenticacao *cntrLNAutenticacao){
        this->cntrLNAutenticacao = cntrLNAutenticacao;
}




class CntrIUEstante:public IUEstante {

private:

    // Refer�ncia para servidor.

    ILNEstante *cntrLNEstante;

public:

    ResultadoEstante buscar() throw(runtime_error);

    void setCntrLNEstante(ILNEstante*);
};


void inline CntrIUEstante::setCntrLNEstante(ILNEstante *cntrLNEstante){
        this->cntrLNEstante = cntrLNEstante;
}

// Declaração de classe controladora de interação para o serviço de cadastro de usuário.

class CntrIUUsuarios:public IUUsuarios {

private:

    // Referência para servidor.

    ISUsuarios *cntrSUsuarios;

    // Declarações de possíveis resultados.

    const static int SUCESSO = 0;
    const static int FALHA   = 1;

public:

    int cadastrar() throw(runtime_error);

    void setCntrSUsuarios(ISUsuarios*);
};


void inline CntrIUUsuarios::setCntrSUsuarios(ISUsuarios *cntrSUsuarios){
        this->cntrSUsuarios = cntrSUsuarios;
}

#endif // CONTROLADORAS_H_INCLUDED


