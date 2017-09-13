#include <iostream>

#include "Dominio.h"
#include "Entidades.h"
#include "TestesDominio.h"
#include "TestesEntidades.h"


using namespace std;

int main()
{

    cout << "Testes de Dominios" << endl;

    TUNome testeNome;

    switch(testeNome.run()){
        case TUNome::SUCESSO: cout << "Nome - SUCESSO" << endl;
                                break;
        case TUNome::FALHA  : cout << "Nome - FALHA" << endl;
                                break;
    }

    TUTelefone testeTelefone;

    switch(testeTelefone.run()){
        case TUTelefone::SUCESSO: cout << "Telefone - SUCESSO" << endl;
                                break;
        case TUTelefone::FALHA  : cout << "Telefone - FALHA" << endl;
                                break;
    }

    TUTitulo testeTitulo;

    switch(testeTitulo.run()){
        case TUTitulo::SUCESSO: cout << "Titulo - SUCESSO" << endl;
                                break;
        case TUTitulo::FALHA  : cout << "Titulo - FALHA" << endl;
                                break;
    }

    TUCodigo testeCodigo;

    switch(testeCodigo.run()){
        case TUCodigo::SUCESSO: cout << "Codigo - SUCESSO" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "Codigo - FALHA" << endl;
                                break;
    }

    TUGeneroLiterario testeGeneroLiterario;

    switch(testeGeneroLiterario.run()){
        case TUGeneroLiterario::SUCESSO: cout << "Genero Literario - SUCESSO" << endl;
                                break;
        case TUGeneroLiterario::FALHA  : cout << "Genero Literario - FALHA" << endl;
                                break;
    }


        TUApelido testeApelido;

    switch(testeApelido.run()){
        case TUApelido::SUCESSO: cout << "Apelido - SUCESSO" << endl;
                                break;
        case TUApelido::FALHA  : cout << "Apelido - FALHA" << endl;
                                break;
    }

    TUSenha testeSenha;

    switch(testeSenha.run()){
        case TUSenha::SUCESSO: cout << "Senha - SUCESSO" << endl;
                                break;
        case TUSenha::FALHA  : cout << "Senha - FALHA" << endl;
                                break;
    }

    TUData testeData;

    switch(testeData.run()){
        case TUData::SUCESSO: cout << "Data - SUCESSO" << endl;
                                break;
        case TUData::FALHA  : cout << "Data - FALHA" << endl;
                                break;
    }

    TUTexto testeTexto;

    switch(testeTexto.run()){
        case TUTexto::SUCESSO: cout << "Texto - SUCESSO" << endl;
                                break;
        case TUTexto::FALHA  : cout << "Texto - FALHA" << endl;
                                break;
    }
    cout << endl;
    cout << "Testes de Entidades" << endl;


    TUUsuario testeUsuario;

    switch(testeUsuario.run()){
        case TUUsuario::SUCESSO: cout << "Usuario - SUCESSO" << endl;
                                break;
        case TUUsuario::FALHA  : cout << "Usuario - FALHA" << endl;
                                break;
    }

    TUResenha testeResenha;

    switch(testeResenha.run()){
        case TUResenha::SUCESSO: cout << "Resenha - SUCESSO" << endl;
                                break;
        case TUResenha::FALHA  : cout << "Resenha - FALHA" << endl;
                                break;
    }

    TULivro testeLivro;

    switch(testeLivro.run()){
        case TULivro::SUCESSO: cout << "Livro - SUCESSO" << endl;
                                break;
        case TULivro::FALHA  : cout << "Livro - FALHA" << endl;
                                break;
    }
    return 0;
}
