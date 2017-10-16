// Exemplos desenvolvidos para ilustrar a sintaxe da linguagem.

#include <stdexcept>
#include <iostream>
#include <string>

#include "Dominio.h"
#include "Entidades.h"
#include "interfaces.h"
#include "controladoras.h"
#include "stubs.h"

#define AUTENTICACAO 1
#define CADASTRO 2
#define SAIR 3
#define PESQUISAR_LIVRO 1
#define INCLUIR_LIVRO 2
#define REMOVER_LIVRO 3
#define CRIAR_RESENHA 4
#define LOGOFF 7
#define INFORMAR_TROCA 5
#define PESQUISAR_USUARIO 6


using namespace std;

int main()
{

    // EXEMPLO
    // -----------------------------------------------------------

    // Ligação entre controladora na camada de apresentação e stub.

    // Instancia as controladoras.

    IUAutenticacao  *cntrIUAutenticacao = new CntrIUAutenticacao();
    ILNAutenticacao *stubLNAutenticacao = new StubLNAutenticacao();
    IUUsuarios  *cntrIUUsuarios = new CntrIUUsuarios();
    ISUsuarios *stubLNUsuarios = new StubLNUsuarios();
    IUEstante  *cntrIUEstante = new CntrIUEstante();
    ILNEstante *stubLNEstante = new StubLNEstante();

    // Liga instância da controladora de interacao a instância do stub na camada de serviço.

    cntrIUAutenticacao->setCntrLNAutenticacao(stubLNAutenticacao);
    cntrIUEstante->setCntrLNEstante(stubLNEstante);
    cntrIUUsuarios->setCntrSUsuarios(stubLNUsuarios);

    // Retorno dos resultados dos serviços solicitados

    ResultadoAutenticacao resultado;
    ResultadoEstante resultado2;
    int resultado3;

    //variavel de selecao do menu
    int opcao;

    do{

        cout << endl << "Escolha a opcao desejada:" << endl;
        cout << endl << "1 - Autenticacao." << endl;
        cout << endl << "2 - Cadastro." << endl;
        cout << endl << "3 - Sair." << endl;
        cout << endl << "Opcao: ";
        cin >> opcao;

        if(opcao == AUTENTICACAO){
            // Simula a tela de autenticacao do sistema.

            cout << endl << "Tela de autenticacao de sistema." << endl;

             // Para facilitar o teste informa os valores inválidos.

            cout << endl << "VALORES DOS TRIGGERS:" << endl << endl;
            cout << "Apelido invalido                     = " << Apelido::APELIDO_INVALIDO << endl;
            cout << "Senha invalida                       = " << Senha::SENHA_INVALIDA << endl;
            cout << "Trigger de falha (apelido)           = " << StubLNAutenticacao::TRIGGER_FALHA << endl;
            cout << "Trigger de erro de sistema (apelido) = " << StubLNAutenticacao::TRIGGER_ERRO_SISTEMA << endl;


            try{

                // Ilustra soliciatacao de serviço de autenticação.

                resultado = cntrIUAutenticacao->autenticar();
            }
            catch(const runtime_error &exp){
                     cout << "Erro de sistema." << endl;
            }


            // Critica o resultado da autenticação.

            if(resultado.getValor() == ResultadoAutenticacao::SUCESSO) {

                int opcao2;

                do{

                    cout << endl << "Escolha a opcao desejada:" << endl;
                    cout << endl << "1 - Pesquisar Livro." << endl;
                    cout << endl << "2 - Incluir Livro." << endl;
                    cout << endl << "3 - Remover Livro." << endl;
                    cout << endl << "4 - Criar Resenha." << endl;
                    cout << endl << "5 - Informar Troca." << endl;
                    cout << endl << "6 - Pesquisar Usuario." << endl;
                    cout << endl << "7 - Fazer Logoff." << endl;
                    cout << endl << "Opcao: ";
                    cin >> opcao2;

                    if(opcao2 == PESQUISAR_LIVRO){
                        // Simula a tela de busca por titulo.

                        cout << endl << "Tela de busca por titulo." << endl;

                        cout << "Trigger de falha           = " << StubLNEstante::TRIGGER_FALHA << endl;
                        cout << "Trigger de erro de sistema = " << StubLNEstante::TRIGGER_ERRO_SISTEMA << endl;
                        cout << "Trigger de sucesso         = " << StubLNEstante::TRIGGER_SUCESSO << endl;

                        try{

                            // Ilustra soliciatacao de serviço de busca.

                            resultado2 = cntrIUEstante->buscar();
                        }
                        catch(const runtime_error &exp){
                                 cout << "Erro de sistema." << endl;
                        }

                        // Critica o resultado da busca na estante.

                        //if(resultado2.getValor() == ResultadoEstante::SUCESSO) {
                            //break;
                        //}
                    }
                    else if(opcao2 == INCLUIR_LIVRO){

                    }
                    else if(opcao2 == REMOVER_LIVRO){

                    }
                    else if(opcao2 == CRIAR_RESENHA){

                    }
                    else if(opcao2 == INFORMAR_TROCA){

                    }
                    else if(opcao2 == PESQUISAR_USUARIO){

                    }
                }while(opcao2 != LOGOFF);

            }
        }
        else if(opcao == CADASTRO){

            // Simula a tela de cadastro de usuario no sistema.

            cout << endl << "Tela de cadastro de usuario." << endl;

            // Para facilitar o teste informa os valores inválidos.

            cout << endl << "VALORES DOS TRIGGERS:" << endl << endl;
            cout << "Nome invalido                        = " << Nome::NOME_INVALIDO << endl;
            cout << "Apelido invalido                     = " << Apelido::APELIDO_INVALIDO << endl;
            cout << "Telefone invalido                    = " << Telefone::TELEFONE_INVALIDO << endl;
            cout << "Senha invalida                       = " << Senha::SENHA_INVALIDA << endl;
            cout << "Trigger de falha (apelido)           = " << StubLNUsuarios::TRIGGER_FALHA << endl;
            cout << "Trigger de erro de sistema (apelido) = " << StubLNUsuarios::TRIGGER_ERRO_SISTEMA << endl;

            try{

                // Ilustra soliciatacao de serviço de autenticação.

                resultado3 = cntrIUUsuarios->cadastrar();
            }
            catch(const runtime_error &exp){
                     cout << "Erro de sistema." << endl;
            }

        }
    }while(opcao != SAIR);

        return 0;
}
