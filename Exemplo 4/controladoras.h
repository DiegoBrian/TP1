#ifndef CONTROLADORAS_H_INCLUDED
#define CONTROLADORAS_H_INCLUDED

#include "interfaces.h"
#include "dominios.h"

#include <stdexcept>
#include <iostream>
#include <cstdlib>

using namespace std;


// Declaração de classe controladora de interação para o serviço de autenticação.

class CntrIUAutenticacao:public IUAutenticacao {

private:

    // Referência para servidor.

    ILNAutenticacao *cntrLNAutenticacao;

public:

    ResultadoAutenticacao autenticar() throw(runtime_error);

    void setCntrLNAutenticacao(ILNAutenticacao*);
};


void inline CntrIUAutenticacao::setCntrLNAutenticacao(ILNAutenticacao *cntrLNAutenticacao){
        this->cntrLNAutenticacao = cntrLNAutenticacao;
}

// Declaração de controladora de interação para o serviço de gerentes.

class CntrIUGerente:public IUGerente {

private:

    const static int INCLUIR   = 1;
    const static int REMOVER   = 2;
    const static int PESQUISAR = 3;
    const static int EDITAR    = 4;
    const static int RETORNAR  = 5;

    // Referência para servidor.

    ILNGerente *cntrLNGerente;

public:

    // Método previsto na interface por meio do qual é solicitada execução da controladora.

    void executar(const Matricula&) throw(runtime_error);

    // Método por meio do qual é estabelecido relacionamento com o servidor.

    void setCntrLNGerente(ILNGerente *cntrLNGerente){
        this->cntrLNGerente = cntrLNGerente;
    }
};


#endif // CONTROLADORAS_H_INCLUDED
