#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;

// Declaração de classe Gerente.

class Gerente {

private:

    Matricula matricula;

public:

    void setMatricula(const Matricula &matricula){
        this->matricula = matricula;
    }

    Matricula getMatricula() const {
        return matricula;
    }
};

// Declarações de classes que representam resultados.


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

class ResultadoAutenticacao:public Resultado {

private:
    Matricula matricula;

public:
    void setMatricula(const Matricula &matricula){      // passagem por referência.
        this->matricula = matricula;
    }

    Matricula getMatricula() const {
        return matricula;
    }
};

class ResultadoGerente:public Resultado {

private:
    Gerente gerente;

public:
    void setGerente(const Gerente &gerente){
        this->gerente = gerente;
    }

    Gerente getGerente() const {
        return gerente;
    }
};

#endif // ENTIDADES_H_INCLUDED
