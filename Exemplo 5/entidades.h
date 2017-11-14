#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"

#include <string>

using namespace std;

class Usuario {

private:

    Matricula matricula;

    Senha senha;

public:

    void setMatricula(const Matricula &matricula){
        this->matricula = matricula;
    }

    Matricula getMatricula(){
        return matricula;
    }

    void setSenha(const Senha &senha){
        this->senha = senha;
    }

    Senha getSenha(){
        return senha;
    }
};

#endif // ENTIDADES_H_INCLUDED
