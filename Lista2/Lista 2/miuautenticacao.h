#ifndef MIUAUTENTICACAO_H_INCLUDED
#define MIUAUTENTICACAO_H_INCLUDED

#include "interfaces.h"
#include "Dominio.h"

#include <stdexcept>
#include <iostream>

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

#endif // CONTROLADORAS_H_INCLUDED

