#ifndef CONTROLADORAS_H_INCLUDED
#define CONTROLADORAS_H_INCLUDED

#include "interfaces.h"
#include "dominios.h"

#include <stdexcept>
#include <iostream>
#include <cstdlib>

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

// Declara��o de controladora de intera��o para o servi�o de gerentes.

class CntrIUGerente:public IUGerente {

private:

    const static int INCLUIR   = 1;
    const static int REMOVER   = 2;
    const static int PESQUISAR = 3;
    const static int EDITAR    = 4;
    const static int RETORNAR  = 5;

    // Refer�ncia para servidor.

    ILNGerente *cntrLNGerente;

public:

    // M�todo previsto na interface por meio do qual � solicitada execu��o da controladora.

    void executar(const Matricula&) throw(runtime_error);

    // M�todo por meio do qual � estabelecido relacionamento com o servidor.

    void setCntrLNGerente(ILNGerente *cntrLNGerente){
        this->cntrLNGerente = cntrLNGerente;
    }
};


#endif // CONTROLADORAS_H_INCLUDED
