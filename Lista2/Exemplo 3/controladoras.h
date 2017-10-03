#ifndef CONTROLADORAS_H_INCLUDED
#define CONTROLADORAS_H_INCLUDED

#include "interfaces.h"
#include "dominios.h"

#include <stdexcept>
#include <iostream>
#include <cstdlib>

using namespace std;

// Exemplifica controladora com múltiplos serviços providos.

class CntrIUGerente:public IUGerente {

private:

    const static int INCLUIR   = 1;
    const static int REMOVER   = 2;
    const static int PESQUISAR = 3;
    const static int EDITAR    = 4;
    const static int RETORNAR  = 5;

    // Declarações adiantadas das classes internas.

    class CntrEdicao;
    class CntrInclusao;
    class CntrPesquisa;
    class CntrRemocao;

    // Referência para servidor.

    ILNGerente *cntrLNGerente;

    // Métodos responsáveis por prover os serviços.

    void incluir();
    void remover();
    void pesquisar();
    void editar();

public:

    // Método previsto na interface por meio do qual é solicitada execução da controladora.

    void executar(const Matricula&);

    // Método por meio do qual é estabelecido relacionamento com o servidor.

    void setCntrLNGerente(ILNGerente *cntrLNGerente){
        this->cntrLNGerente = cntrLNGerente;
    }
};


#endif // CONTROLADORAS_H_INCLUDED
