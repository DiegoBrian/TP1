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
    Data data;
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

    void setData(const Data &data){
        this->data = data;
    }

    Data getData() const {
        return data;
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

    /*Usuario (const Nome &nome, const Apelido &apelido, const Telefone &telefone, const Senha &senha){
        setNome(nome);
        setApelido(apelido);
        setTelefone(telefone);
        setSenha(senha);
    }*/

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

