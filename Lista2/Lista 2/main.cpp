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

/** @author A�cio Fernandes Galiza Magalh�es - 15/0115121
*   @author Diego Brian Coelho Leite - 14/0136371
*/


using namespace std;

/**
     *  @class main
     *  Classe controladora principal  Entre as suas atribuicoes esta fazer a montagem de todo o sistema e construir as
     *  telas de menu principal para a navegacao do usuario
     */

int main()
{

    // Criar um container.

    ContainerUsuario container;


    // Liga��o entre controladora na camada de apresenta��o e stub.

    // Instancia as controladoras.

    IUAutenticacao  *cntrIUAutenticacao = new CntrIUAutenticacao();
    ILNAutenticacao *stubLNAutenticacao = new StubLNAutenticacao();
    IUUsuarios  *cntrIUUsuarios = new CntrIUUsuarios();
    ISUsuarios *stubLNUsuarios = new StubLNUsuarios();
    IUEstante  *cntrIUEstante = new CntrIUEstante();
    ILNEstante *stubLNEstante = new StubLNEstante();

    // Liga inst�ncia da controladora de interacao a inst�ncia do stub na camada de servi�o.

    cntrIUAutenticacao->setCntrLNAutenticacao(stubLNAutenticacao);
    cntrIUEstante->setCntrLNEstante(stubLNEstante);
    cntrIUUsuarios->setCntrSUsuarios(stubLNUsuarios);

    // Retorno dos resultados dos servi�os solicitados
    ResultadoUsuario resultado;
    ResultadoAutenticacao resultado1;
    ResultadoBuscaLivro resultado2;
    ResultadoInsercao resultado4;
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

             // Para facilitar o teste informa os valores inv�lidos.

            cout << endl << "VALORES DOS TRIGGERS:" << endl << endl;
            cout << "Apelido invalido                     = " << Apelido::APELIDO_INVALIDO << endl;
            cout << "Senha invalida                       = " << Senha::SENHA_INVALIDA << endl;
            cout << "Trigger de falha (apelido)           = " << StubLNAutenticacao::TRIGGER_FALHA << endl;
            cout << "Trigger de erro de sistema (apelido) = " << StubLNAutenticacao::TRIGGER_ERRO_SISTEMA << endl;


            try{

                // Ilustra soliciatacao de servi�o de autentica��o.

                resultado1 = cntrIUAutenticacao->autenticar();
            }
            catch(const runtime_error &exp){
                     cout << "Erro de sistema." << endl;
            }


            // Critica o resultado da autentica��o.

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
                        // Simula a tela de BuscaLivro por titulo.

                        cout << endl << "Tela de Busca por titulo." << endl;

                        cout << "Trigger de falha           = " << StubLNEstante::TRIGGER_FALHA << endl;
                        cout << "Trigger de erro de sistema = " << StubLNEstante::TRIGGER_ERRO_SISTEMA << endl;
                        cout << "Trigger de sucesso         = " << StubLNEstante::TRIGGER_SUCESSO << endl;

                        try{

                            // Ilustra soliciatacao de servi�o de BuscaLivro.

                            resultado2 = cntrIUEstante->buscarlivro();
                        }
                        catch(const runtime_error &exp){
                                 cout << "Erro de sistema." << endl;
                        }

                    }
                    else if(opcao2 == INCLUIR_LIVRO){
                            // Simula a inclusao de um livro.

                        cout << endl << "Tela de inclusao de livro." << endl;

                        cout << "Trigger de falha           = " << StubLNEstante::TRIGGER_FALHA << endl;
                        cout << "Trigger de erro de sistema = " << StubLNEstante::TRIGGER_ERRO_SISTEMA << endl;
                        cout << "Trigger de sucesso         = " << StubLNEstante::TRIGGER_SUCESSO << endl;

                         try{

                            // Ilustra soliciatacao de servi�o de Inclusao.

                            resultado4 = cntrIUEstante->inserir();
                        }
                        catch(const runtime_error &exp){
                                 cout << "Erro de sistema." << endl;
                        }

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

            // Para facilitar o teste informa os valores inv�lidos.

            cout << endl << "VALORES DOS TRIGGERS:" << endl << endl;
            cout << "Nome invalido                        = " << Nome::NOME_INVALIDO << endl;
            cout << "Apelido invalido                     = " << Apelido::APELIDO_INVALIDO << endl;
            cout << "Telefone invalido                    = " << Telefone::TELEFONE_INVALIDO << endl;
            cout << "Senha invalida                       = " << Senha::SENHA_INVALIDA << endl;
            cout << "Trigger de falha (apelido)           = " << StubLNUsuarios::TRIGGER_FALHA << endl;
            cout << "Trigger de erro de sistema (apelido) = " << StubLNUsuarios::TRIGGER_ERRO_SISTEMA << endl;

            try{

                // Ilustra soliciatacao de servi�o de cadastro.

                resultado3 = cntrIUUsuarios->cadastrar();
            }
            catch(const runtime_error &exp){
                     cout << "Erro de sistema." << endl;
            }

        }
    }while(opcao != SAIR);

        return 0;
}
