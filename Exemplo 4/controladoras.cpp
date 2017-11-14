#include "controladoras.h"
#include "comandos.h"

// Defini��es de m�todos da classe CntrIUAutenticacao.

ResultadoAutenticacao CntrIUAutenticacao::autenticar() throw(runtime_error) {

    ResultadoAutenticacao resultadoAutenticacao;
    Resultado resultado;
    Matricula matricula;
    Senha senha;
    int entrada;

    // Solicitar matricula e senha.

    while(true) {

        try {
            cout << "Digite a matricula : ";
            cin >> entrada;
            matricula.setValor(entrada);
            cout << "Digite a senha     : ";
            cin >> entrada;
            senha.setValor(entrada);
            break;
        }
        catch (const invalid_argument &exp) {
            cout << endl << "Dado em formato incorreto." << endl;
        }
    }

    // Solicitar autentica��o.

    resultado = cntrLNAutenticacao->autenticar(matricula, senha);

    // Informar resultado da autentica��o.

    if(resultado.getValor() == ResultadoAutenticacao::FALHA){
        cout << endl << "Falha na autenticacao." << endl;
    }

    resultadoAutenticacao.setValor(resultado.getValor());
    resultadoAutenticacao.setMatricula(matricula);

    return resultadoAutenticacao;
}


// Defini��es de m�todos da classe CntrIUGerente.

void CntrIUGerente::executar(const Matricula &matricula) throw(runtime_error){

    ComandoIUGerente *comando;

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
            case INCLUIR:   comando = new ComandoIUGerenteIncluir();
                            comando->executar(cntrLNGerente);
                            delete comando;
                            break;
            case REMOVER:   comando = new ComandoIUGerenteRemover();
                            comando->executar(cntrLNGerente);
                            delete comando;
                            break;
            case PESQUISAR: comando = new ComandoIUGerentePesquisar();
                            comando->executar(cntrLNGerente);
                            delete comando;
                            break;
            case EDITAR:    comando = new ComandoIUGerenteEditar();
                            comando->executar(cntrLNGerente);
                            delete comando;
                            break;
        }

        if(opcao == RETORNAR){
            break;
        }

    }

    return;
}

