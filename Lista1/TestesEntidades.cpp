#include "TestesEntidades.h"
#include<iostream>

// Definições de constantes para evitar numeros mágicos.

const string TUUsuario::NOME_VALIDO   = "Diego";
const string TUUsuario::APELIDO_VALIDO   = "dbcl";
const string TUUsuario::TELEFONE_VALIDO   = "(61)-123456789";
const string TUUsuario::SENHA_VALIDA   = "ABCD";

// Definições de métodos.

void TUUsuario::setUp(){
    usuario = new Usuario();

    nome.setNome(NOME_VALIDO);
    apelido.setApelido(APELIDO_VALIDO);
    telefone.setTelefone(TELEFONE_VALIDO);
    senha.setSenha(SENHA_VALIDA);

    estado = SUCESSO;
}

void TUUsuario::tearDown(){
    delete usuario;
}

void TUUsuario::testarCenarioSucesso(){
    try{
        usuario->setNome(nome);
        if (usuario->getNome().getNome() != nome.getNome())
            estado = FALHA;
        usuario->setApelido(apelido);
        if (usuario->getApelido().getApelido() != apelido.getApelido() )
            estado = FALHA;
        usuario->setTelefone(telefone);
        if (usuario->getTelefone().getTelefone() != telefone.getTelefone() )
            estado = FALHA;
        usuario->setSenha(senha);
        if (usuario->getSenha().getSenha() != senha.getSenha())
            estado = FALHA;


    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

int TUUsuario::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

// Definições de constantes para evitar numeros mágicos.

const string TULivro::TITULO_VALIDO   = "Titulo Valido";
const string TULivro::AUTOR_VALIDO = "Autor";
const string TULivro::DATA_VALIDA   = "01/02/03";
const string TULivro::VALOR_VALIDO   = "12345";
const string TULivro::GENERO_VALIDO   = "Novela";


void TULivro::setUp(){
    livro = new Livro();

    titulo.setTitulo(TITULO_VALIDO);
//    nomeAutor.setNomeAutor(AUTOR_VALIDO);
    data.setData(DATA_VALIDA);
    codigo.setCodigo(VALOR_VALIDO);
    generoLiterario.setGeneroLiterario(GENERO_VALIDO);

    estado = SUCESSO;
}

void TULivro::tearDown(){
    delete livro;
}

void TULivro::testarCenarioSucesso(){
    try{
        livro->setTitulo(titulo);
        if (livro->getTitulo().getTitulo() != titulo.getTitulo())
            estado = FALHA;
        livro->setData(data);
        if (livro->getData().getData() != data.getData() )
            estado = FALHA;
        livro->setCodigo(codigo);
        if (livro->getCodigo().getCodigo() != codigo.getCodigo() )
            estado = FALHA;
        livro->setGeneroLiterario(generoLiterario);
        if (livro->getGeneroLiterario().getGeneroLiterario() != generoLiterario.getGeneroLiterario())
            estado = FALHA;


    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

int TULivro::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

// Definições de constantes para evitar numeros mágicos.

const string TUResenha::TEXTO_VALIDO   = "Hello, world";

void TUResenha::setUp(){
    resenha = new Resenha();

    texto.setTexto(TEXTO_VALIDO);

    estado = SUCESSO;
}

void TUResenha::tearDown(){
    delete resenha;
}

void TUResenha::testarCenarioSucesso(){
    try{
        resenha->setTexto(texto);
        if (resenha->getTexto().getTexto() != texto.getTexto())
            estado = FALHA;

    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

int TUResenha::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}
