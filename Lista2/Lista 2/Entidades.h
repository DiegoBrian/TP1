#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "Dominio.h"

#include <string>

using namespace std;

// Declarações de classes que modelam resultados.


class Resultado {

protected:
    int valor;

public:

    // Declarações de possíveis resultados.

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
    Apelido apelido;

public:
    void setApelido(const Apelido &apelido){      // passagem por referência.
        this->apelido = apelido;
    }

    Apelido getApelido() const {
        return apelido;
    }
};



class ResultadoEstante:public Resultado {

private:
    Titulo titulo;

public:
    void setTitulo(const Titulo &titulo){      // passagem por referência.
        this->titulo = titulo;
    }

    Titulo getTitulo() const {
        return titulo;
    }

};

#endif // ENTIDADES_H_INCLUDED
