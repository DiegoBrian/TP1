#include "controladoras.h"

// Defini��es de m�todos da classe CntrIUGerente.

void CntrIUGerente::executar(const Matricula &matricula){

    int opcao;

    while(true){

        // Ilustra limpeza de tela.

        // system("CLS");

        // Apresentar as op��es.

        cout << endl << "Gerenciamento de Gerente." << endl << endl;

        cout << "Incluir   - " << INCLUIR << endl;
        cout << "Remover   - " << REMOVER << endl;
        cout << "Pesquisar - " << PESQUISAR << endl;
        cout << "Editar    - " << EDITAR << endl;
        cout << "Retornar  - " << RETORNAR << endl << endl;
        cout << "Selecione uma opcao :";

        cin >> opcao;

        switch(opcao){
            case INCLUIR:   incluir();
                            break;
            case REMOVER:   remover();
                            break;
            case PESQUISAR: pesquisar();
                            break;
            case EDITAR:    editar();
                            break;
        }

        if(opcao == RETORNAR)
            break;
    }

    return;
}

void CntrIUGerente::incluir(){

    Resultado resultado;

    Gerente gerente;

    // A seguir incluir c�digo de intera��o com o usu�rio.

    // C�digo de intera��o com o usu�rio.

    // Solicitar servi�o.

    try{
        resultado = cntrLNGerente->incluir(gerente);

        if(resultado.getValor() == Resultado::SUCESSO)
            cout << "Sucesso na execucao da operacao" << endl;
        else
            cout << "Falha na execucao da operacao" << endl;
    }
    catch(runtime_error &exp){

    }

}

void CntrIUGerente::remover(){

    Resultado resultado;

    Matricula matricula;

    // A seguir incluir c�digo de intera��o com o usu�rio.

    // C�digo de intera��o com o usu�rio.

    // Solicitar servi�o.

    try{
        resultado = cntrLNGerente->remover(matricula);

        if(resultado.getValor() == Resultado::SUCESSO)
            cout << "Sucesso na execucao da operacao" << endl;
        else
            cout << "Falha na execucao da operacao" << endl;
    }
    catch(runtime_error &exp){
        cout << "Erro de sistema" << endl;
    }
}

void CntrIUGerente::pesquisar(){

    ResultadoGerente resultado;

    Matricula matricula;

    // A seguir incluir c�digo de intera��o com o usu�rio.

    // C�digo de intera��o com o usu�rio.

    // Solicitar servi�o.

    try{
        resultado = cntrLNGerente->pesquisar(matricula);

        if(resultado.getValor() == Resultado::SUCESSO)
            cout << "Sucesso na execucao da operacao" << endl;
        else
            cout << "Falha na execucao da operacao" << endl;
    }
    catch(runtime_error &exp){
        cout << "Erro de sistema" << endl;
    }

}

void CntrIUGerente::editar(){

    Resultado resultado;

    Gerente gerente;

    // A seguir incluir c�digo de intera��o com o usu�rio.

    // C�digo de intera��o com o usu�rio.

    // Solicitar servi�o.

    try{
        resultado.setValor(Resultado::SUCESSO);

        cntrLNGerente->editar(gerente);

        if(resultado.getValor() == Resultado::SUCESSO)
            cout << "Sucesso na execucao da operacao" << endl;
        else
            cout << "Falha na execucao da operacao" << endl;
    }
    catch(runtime_error &exp){
        cout << "Erro de sistema" << endl;
    }

}

