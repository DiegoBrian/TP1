#ifndef CONTAINERS_H_INCLUDED
#define CONTAINERS_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

#include <list>

using namespace std;

// Declara��o de classe container de usu�rios.

class ContainerUsuario{

private:

    // Refer�ncia para o container.

    list<Usuario> container;

public:

    // M�todos por meio dos quais s�o solicitados os servi�os.

    ResultadoUsuario incluir(Usuario);
    ResultadoUsuario remover(Matricula);
    ResultadoUsuario pesquisar(Matricula);
};

#endif // CONTROLADORAS_H_INCLUDED
