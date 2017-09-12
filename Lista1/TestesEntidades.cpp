#include "TestesEntidades.h"
#include<iostream>
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

//
