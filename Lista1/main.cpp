#include <iostream>

#include "Dominio.h"
#include "Entidades.h"
#include "TestesDominio.h"
#include "TestesEntidades.h"


using namespace std;

int main()
{

    TUNome testeNome;

    switch(testeNome.run()){
        case TUNome::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUNome::FALHA  : cout << "FALHA" << endl;
                                break;
    }

    TUTelefone testeTelefone;

    switch(testeTelefone.run()){
        case TUTelefone::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUTelefone::FALHA  : cout << "FALHA" << endl;
                                break;
    }

    TUTitulo testeTitulo;

    switch(testeTitulo.run()){
        case TUTitulo::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUTitulo::FALHA  : cout << "FALHA" << endl;
                                break;
    }

    TUCodigo testeCodigo;

    switch(testeCodigo.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA" << endl;
                                break;
    }

    TUGeneroLiterario testeGeneroLiterario;

    switch(testeGeneroLiterario.run()){
        case TUGeneroLiterario::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUGeneroLiterario::FALHA  : cout << "FALHA" << endl;
                                break;
    }


        TUApelido testeApelido;

    switch(testeApelido.run()){
        case TUApelido::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUApelido::FALHA  : cout << "FALHA" << endl;
                                break;
    }

    TUSenha testeSenha;

    switch(testeSenha.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUSenha::FALHA  : cout << "FALHA" << endl;
                                break;
    }

    TUData testeData;

    switch(testeData.run()){
        case TUData::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUData::FALHA  : cout << "FALHA" << endl;
                                break;
    }

    TUTexto testeTexto;

    switch(testeTexto.run()){
        case TUTexto::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUTexto::FALHA  : cout << "FALHA" << endl;
                                break;
    }

    TUUsuario testeUsuario;

    switch(testeUsuario.run()){
        case TUUsuario::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUUsuario::FALHA  : cout << "FALHA" << endl;
                                break;
    }
    return 0;
}
