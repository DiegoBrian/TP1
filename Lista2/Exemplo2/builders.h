#ifndef BUILDERS_H_INCLUDED
#define BUILDERS_H_INCLUDED

#include "interfaces.h"
#include "dominios.h"
#include "interfaces.h"
#include "controladoras.h"
#include "stubs.h"

#include <stdexcept>
#include <iostream>
#include <cstdlib>

using namespace std;

// Builder responsável por construir o subsistema de autenticacao no modo teste.

// Builder implementado como um Singleton.

class BuilderSubsistemaAutenticacao {

    public:

        IAutenticacao *construir();
};

#endif // BUILDERS_H_INCLUDED


