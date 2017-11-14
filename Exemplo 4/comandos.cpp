#include "comandos.h"


// Método por meio do qual é solicitada a execução do comando.

void ComandoIUGerenteIncluir::executar(ILNGerente* cntrLNGerente) throw(runtime_error){

    Resultado resultado;

    Gerente gerente;

    // Código de interação com o usuário.

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

    // Solicitar serviço.

    resultado = cntrLNGerente->incluir(gerente);

    if(resultado.getValor() == Resultado::SUCESSO){
         cout << "Sucesso na execucao da operacao" << endl;
    }
    else {
        cout << "Falha na execucao da operacao" << endl;
    }
}

// Método por meio do qual é solicitada a execução do comando.

void ComandoIUGerenteRemover::executar(ILNGerente* cntrLNGerente) throw(runtime_error){

    Resultado resultado;

    Matricula matricula;

    // Código de interação com o usuário.

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

    // Solicitar serviço.

    resultado = cntrLNGerente->remover(matricula);

    if(resultado.getValor() == Resultado::SUCESSO){
         cout << "Sucesso na execucao da operacao" << endl;
    }
    else {
        cout << "Falha na execucao da operacao" << endl;
    }

}

// Método por meio do qual é solicitada a execução do comando.

void ComandoIUGerentePesquisar::executar(ILNGerente* cntrLNGerente)throw(runtime_error){

    ResultadoGerente resultado;

    Matricula matricula;

    // A seguir incluir código de interação com o usuário.

    // Código de interação com o usuário.

    // Solicitar serviço.


    resultado = cntrLNGerente->pesquisar(matricula);

    if(resultado.getValor() == Resultado::SUCESSO){
         cout << "Sucesso na execucao da operacao" << endl;
    }
    else {
        cout << "Falha na execucao da operacao" << endl;
    }

}

// Método por meio do qual é solicitada a execução do comando.

void ComandoIUGerenteEditar::executar(ILNGerente* cntrLNGerente)throw(runtime_error){

    Resultado resultado;

    Gerente gerente;

    // A seguir incluir código de interação com o usuário.

    // Código de interação com o usuário.

    // Solicitar serviço.


    resultado.setValor(Resultado::SUCESSO);

    cntrLNGerente->editar(gerente);

    if(resultado.getValor() == Resultado::SUCESSO){
         cout << "Sucesso na execucao da operacao" << endl;
    }
    else {
        cout << "Falha na execucao da operacao" << endl;
    }

}
