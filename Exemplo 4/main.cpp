// Exemplos desenvolvidos para ilustrar a sintaxe da linguagem.

#include <stdexcept>
#include <iostream>
#include <string>

#include "dominios.h"
#include "entidades.h"
#include "interfaces.h"
#include "controladoras.h"
#include "stubs.h"

using namespace std;

int main()
{
    // Declara e instancia as controladoras.

    IUAutenticacao  *cntrIUAutenticacao;
    IUGerente       *cntrIUGerente;

    cntrIUAutenticacao = new CntrIUAutenticacao();
    cntrIUGerente = new CntrIUGerente();

    // Declara e instancia os stubs.

    ILNAutenticacao *stubLNAutenticacao;
    ILNGerente      *stubLNGerente;

    stubLNAutenticacao = new StubLNAutenticacao();
    stubLNGerente = new StubLNGerente();

    // Estabelece relacionamentos entre controladoras e stubs.

    cntrIUAutenticacao->setCntrLNAutenticacao(stubLNAutenticacao);
    cntrIUGerente->setCntrLNGerente(stubLNGerente);

    // Para facilitar o teste informa os valores inválidos.

    cout << endl << "VALORES DOS TRIGGERS:" << endl << endl;
    cout << "Matricula invalida          = " << Matricula::MATRICULA_INVALIDA << endl;
    cout << "Senha invalida              = " << Senha::SENHA_INVALIDA << endl;
    cout << "Trigger de falha            = " << StubLNAutenticacao::TRIGGER_FALHA << endl;
    cout << "Trigger de erro de sistema  = " << StubLNAutenticacao::TRIGGER_ERRO_SISTEMA << endl;

    ResultadoAutenticacao resultado;

    while(true){

        // Simula a tela de apresentacao (tela inicial) de sistema.
        cout << endl << "Tela de apresentacao de sistema." << endl;

        try{
            // Solicita o serviço de autenticação.
            resultado = cntrIUAutenticacao->autenticar();

            // Critica o resultado da autenticação.
            if(resultado.getValor() == ResultadoAutenticacao::SUCESSO) {
                break;
            }
        }
        catch(const runtime_error &exp){
                 cout << "Erro de sistema." << endl;
        }
    }

    try{
        // Solicita serviço da controladora de interface gerente.
        cntrIUGerente->executar(resultado.getMatricula());
    }
    catch(const runtime_error &exp){
        cout << "Erro de sistema." << endl;
    }

    // Destroi os objetos anteiormente criados.

    delete cntrIUAutenticacao;
    delete cntrIUGerente;
    delete stubLNAutenticacao;
    delete stubLNGerente;

    return 0;
}
