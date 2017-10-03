#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;

// Declaração de classe.

class Projeto {

private:

    Codigo codigo;

public:

    void setCodigo(const Codigo &codigo){
        this->codigo = codigo;
    }

    Codigo getCodigo() const {
        return codigo;
    }
};

#endif // ENTIDADES_H_INCLUDED
