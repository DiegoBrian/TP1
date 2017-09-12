#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "Dominio.h"
#include <string>

using namespace std;

// Declara��o de classe.

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

class Resenha{

private:

    Texto texto;

public:

    void setTexto(const Texto &texto){
        this->texto = texto;
    }

    Texto getTexto() const {
        return texto;
    }

};

class Usuario{

private:

    Nome nome;
    Apelido apelido;
    Telefone telefone;
    Senha senha;

public:

    void setNome(const Nome &nome){
        this->nome = nome;
    }

    Nome getNome() const {
        return nome;
    }

    void setApelido(const Apelido &apelido){
        this->apelido = apelido;
    }

    Apelido getApelido() const {
        return apelido;
    }

    void setTelefone(const Telefone &telefone){
        this->telefone = telefone;
    }

    Telefone getTelefone() const {
        return telefone;
    }

    void setSenha(const Senha &senha){
        this->senha = senha;
    }

    Senha getSenha() const {
        return senha;
    }
};

#endif // ENTIDADES_H_INCLUDED
