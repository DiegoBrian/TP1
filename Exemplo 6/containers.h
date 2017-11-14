#ifndef CONTAINERS_H_INCLUDED
#define CONTAINERS_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

#include <list>

using namespace std;

// Declaração de classe container de usuários.

class ContainerUsuario{

private:

    // Referência para o container.

    list<Usuario> container;

public:

    // Métodos por meio dos quais são solicitados os serviços.

    ResultadoUsuario incluir(Usuario);
    ResultadoUsuario remover(Matricula);
    ResultadoUsuario pesquisar(Matricula);
};

#endif // CONTROLADORAS_H_INCLUDED
