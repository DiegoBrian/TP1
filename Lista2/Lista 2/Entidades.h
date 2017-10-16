#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "Dominio.h"

#include <string>

using namespace std;

// Declara��o de classe.

    /**
     *  @class Livro
     *  Delimita��o da classe com dados referentes aos campos de registro de livros em estantes virtuais (Titulo,
     *  Nome do Autor, Data de publica��o, C�digo e G�nero Liter�rio).
     */
class Livro {

private:

    Titulo titulo;
    Nome nomeAutor;
    Data data;
    Codigo codigo;
    GeneroLiterario generoLiterario;

public:

     /** M�todos de acesso.*/

    void setTitulo(const Titulo &titulo){
        this->titulo = titulo;
    }

    /** Metodo de acesso.*/

    Titulo getTitulo() const {
        return titulo;
    }

    /** Metodo de acesso.*/

    void setNomeAutor(const Nome &nomeAutor){
        this->nomeAutor = nomeAutor;
    }

    /** Metodo de acesso.*/

    Nome getNomeAutor() const {
        return nomeAutor;
    }

    /** Metodo de acesso.*/

    void setData(const Data &data){
        this->data = data;
    }

    /** Metodo de acesso.*/

    Data getData() const {
        return data;
    }

    /** Metodo de acesso.*/

    void setCodigo(const Codigo &codigo){
        this->codigo = codigo;
    }

    /** Metodo de acesso.*/

    Codigo getCodigo() const {
        return codigo;
    }

    /** Metodo de acesso.*/

    void setGeneroLiterario(const GeneroLiterario &generoLiterario){
        this->generoLiterario = generoLiterario;
    }

    /** Metodo de acesso.*/

    GeneroLiterario getGeneroLiterario() const {
        return generoLiterario;
    }
};


    /**
     *  @class Resenha
     *  Delimita��o da classe com dados referentes aos campos de registro de resenhas em estante virtual.
     */

class Resenha{

private:

    Texto texto;

public:

    /** Metodo de acesso.*/

    void setTexto(const Texto &texto){
        this->texto = texto;
    }

    /** Metodo de acesso.*/

    Texto getTexto() const {
        return texto;
    }

};

    /**
     *  @class Usuario
     *  Delimita��o da classe com dados referentes aos campos de registro de usu�rios em estantes virtuais. (Nome,
     *  Apelido, Telefone e Senha).
     */

class Usuario{

private:

    Nome nome;
    Apelido apelido;
    Telefone telefone;
    Senha senha;

public:

    /** M�todos de acesso.*/

    void setNome(const Nome &nome){
        this->nome = nome;
    }

    /** Metodo de acesso.*/

    Nome getNome() const {
        return nome;
    }

    /** Metodo de acesso.*/

    void setApelido(const Apelido &apelido){
        this->apelido = apelido;
    }

    /** Metodo de acesso.*/

    Apelido getApelido() const {
        return apelido;
    }

    /** Metodo de acesso.*/

    void setTelefone(const Telefone &telefone){
        this->telefone = telefone;
    }

    /** Metodo de acesso.*/

    Telefone getTelefone() const {
        return telefone;
    }

    /** Metodo de acesso.*/

    void setSenha(const Senha &senha){
        this->senha = senha;
    }

    /** Metodo de acesso.*/

    Senha getSenha() const {
        return senha;
    }
};

// Declara��es de classes que modelam resultados.

/**
     *  @class Resultado
     *  Classe referente a resultados de opera��es tais como cadastro, insercao e remocao de livros na estante e criacao de resenhas
     */

class Resultado {

protected:
    int valor;

public:

    /** Declara��es de poss�veis resultados. */

    const static int SUCESSO = 0;
    const static int FALHA   = 1;

    /** Metodo de acesso.*/
    void setValor(int valor){
        this->valor = valor;
    }

    int getValor() const {
        return valor;
    }
};

/**
     *  @class ResultadoAutenticacao
     *  Classe referente a resultados de opera��es de autenticacao
     */

class ResultadoAutenticacao:public Resultado {

private:
    Apelido apelido;

public:
    /** Metodo de acesso.*/
    void setApelido(const Apelido &apelido){      // passagem por refer�ncia.
        this->apelido = apelido;
    }
    /** Metodo de acesso.*/

    Apelido getApelido() const {
        return apelido;
    }
};

/**
     *  @class ResultadoEstante
     *  Classe referente a resultados de opera��es de busca de livros dentro de uma estante
     */


class ResultadoEstante:public Resultado {

private:
    Titulo titulo;

public:
    void setTitulo(const Titulo &titulo){      // passagem por refer�ncia.
        this->titulo = titulo;
    }

    Titulo getTitulo() const {
        return titulo;
    }

};

#endif // ENTIDADES_H_INCLUDED
