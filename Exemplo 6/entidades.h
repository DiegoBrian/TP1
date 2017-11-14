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

class Resultado {

protected:
    int valor;

public:

    const static int SUCESSO = 0;
    const static int FALHA   = 1;

    void setValor(int valor){
        this->valor = valor;
    }

    int getValor() const {
        return valor;
    }
};

class ResultadoUsuario:public Resultado {

private:
    Usuario usuario;

public:
    void setUsuario(const Usuario &usuario){
        this->usuario = usuario;
    }

    Usuario getUsuario() const {
        return usuario;
    }
};

#endif // ENTIDADES_H_INCLUDED
