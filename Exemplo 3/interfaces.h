#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"
#include <stdexcept>

using namespace std;

// Declaração adiantada.

class ILNGerente;

// Declaração de interface da camada de apresentação.

class IUGerente {
public:

    // Método por meio do qual é solicitado serviço.

    virtual void executar(const Matricula&) = 0;

    // Método por meio do qual é estabelecida ligação (link) com a controladora de negócio.

    virtual void setCntrLNGerente(ILNGerente *) = 0;

    // Destrutor virtual.

    virtual ~IUGerente(){}

};

// Declaração de interface da camada de negócio
// ------------------------------------------------------------------

class ILNGerente {
public:

    // Métodos por meio dos quais são solicitados serviços.

    virtual Resultado incluir(const Gerente&) throw(runtime_error) = 0;
    virtual Resultado remover(const Matricula&) throw(runtime_error) = 0;
    virtual ResultadoGerente pesquisar(const Matricula&) throw(runtime_error) = 0;
    virtual Resultado editar(const Gerente&) throw(runtime_error) = 0;

    // Destrutor virtual.

    virtual ~ILNGerente(){}
};

#endif // INTERFACES_H_INCLUDED
