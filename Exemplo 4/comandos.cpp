#include "comandos.h"


// M�todo por meio do qual � solicitada a execu��o do comando.

void ComandoIUGerenteIncluir::executar(ILNGerente* cntrLNGerente) throw(runtime_error){

    Resultado resultado;

    Gerente gerente;

    // C�digo de intera��o com o usu�rio.

    while(true){
        try{
            int valor;
            Matricula matricula;
            cout << "Digite a matricula: ";
            cin >> valor;
            matricula.setValor(valor);
            gerente.setMatricula(matricula);
            break;
        }
        catch(invalid_argument &exp){
            cout << "Matricula com formato incorreto" << endl;
        }
    }

    // Solicitar servi�o.

    resultado = cntrLNGerente->incluir(gerente);

    if(resultado.getValor() == Resultado::SUCESSO){
         cout << "Sucesso na execucao da operacao" << endl;
    }
    else {
        cout << "Falha na execucao da operacao" << endl;
    }
}

// M�todo por meio do qual � solicitada a execu��o do comando.

void ComandoIUGerenteRemover::executar(ILNGerente* cntrLNGerente) throw(runtime_error){

    Resultado resultado;

    Matricula matricula;

    // C�digo de intera��o com o usu�rio.

    while(true){
        try{
            int valor;
            cout << "Digite a matricula: ";
            cin >> valor;
            matricula.setValor(valor);
            break;
        }
        catch(invalid_argument &exp){
            cout << "Matricula com formato incorreto" << endl;
        }
    }

    // Solicitar servi�o.

    resultado = cntrLNGerente->remover(matricula);

    if(resultado.getValor() == Resultado::SUCESSO){
         cout << "Sucesso na execucao da operacao" << endl;
    }
    else {
        cout << "Falha na execucao da operacao" << endl;
    }

}

// M�todo por meio do qual � solicitada a execu��o do comando.

void ComandoIUGerentePesquisar::executar(ILNGerente* cntrLNGerente)throw(runtime_error){

    ResultadoGerente resultado;

    Matricula matricula;

    // A seguir incluir c�digo de intera��o com o usu�rio.

    // C�digo de intera��o com o usu�rio.

    // Solicitar servi�o.


    resultado = cntrLNGerente->pesquisar(matricula);

    if(resultado.getValor() == Resultado::SUCESSO){
         cout << "Sucesso na execucao da operacao" << endl;
    }
    else {
        cout << "Falha na execucao da operacao" << endl;
    }

}

// M�todo por meio do qual � solicitada a execu��o do comando.

void ComandoIUGerenteEditar::executar(ILNGerente* cntrLNGerente)throw(runtime_error){

    Resultado resultado;

    Gerente gerente;

    // A seguir incluir c�digo de intera��o com o usu�rio.

    // C�digo de intera��o com o usu�rio.

    // Solicitar servi�o.


    resultado.setValor(Resultado::SUCESSO);

    cntrLNGerente->editar(gerente);

    if(resultado.getValor() == Resultado::SUCESSO){
         cout << "Sucesso na execucao da operacao" << endl;
    }
    else {
        cout << "Falha na execucao da operacao" << endl;
    }

}
