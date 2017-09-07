#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "Dominio.h"
#include <string>

using namespace std;

// Declaração de classe.

class Livro {

private:

    Titulo titulo;
    Nome nomeAutor;
    Data dataPublicacao;
    Codigo codigo;
    GeneroLiterario generoLiterario;

public:

    void setTitulo(const Titulo &titulo){
        this->titulo = titulo;
    }

    Titulo getTitulo() const {
        return titulo;
    }

    void setNomeAutor(const Nome &nomeAutor){
        this->nomeAutor = nomeAutor;
    }

    Nome getNomeAutor() const {
        return nomeAutor;
    }

    void setDataPublicacao(const Data &dataPublicacao){
        this->dataPublicacao = dataPublicacao;
    }

    Data getDataPublicacao() const {
        return dataPublicacao;
    }

    void setCodigo(const Codigo &codigo){
        this->codigo = codigo;
    }

    Codigo getCodigo() const {
        return codigo;
    }

    void setGeneroLiterario(const GeneroLiterario &generoLiterario){
        this->generoLiterario = generoLiterario;
    }

    GeneroLiterario getGeneroLiterario() const {
        return generoLiterario;
    }
};

#endif // ENTIDADES_H_INCLUDED

