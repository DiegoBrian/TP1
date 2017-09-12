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
    return 0;
}
