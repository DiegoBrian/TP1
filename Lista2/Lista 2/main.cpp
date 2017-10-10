// Exemplos desenvolvidos para ilustrar a sintaxe da linguagem.

#include <stdexcept>
#include <iostream>
#include <string>

#include "Dominio.h"
#include "Entidades.h"
#include "interfaces.h"
#include "miuautenticacao.h"
#include "stubs.h"

using namespace std;

int main()
{

    // EXEMPLO
    // -----------------------------------------------------------

    // Ligação entre controladora na camada de apresentação e stub.

    // Instancia as controladoras.

    IUAutenticacao  *cntrIUAutenticacao = new CntrIUAutenticacao();
    ILNAutenticacao *stubLNAutenticacao = new StubLNAutenticacao();

    // Liga instância da controladora de interacao a instância do stub na camada de serviço.

    cntrIUAutenticacao->setCntrLNAutenticacao(stubLNAutenticacao);

    // Para facilitar o teste informa os valores inválidos.

    cout << endl << "VALORES DOS TRIGGERS:" << endl << endl;
    cout << "Apelido invalido          = " << Apelido::APELIDO_INVALIDO << endl;
    cout << "Senha invalida              = " << Senha::SENHA_INVALIDA << endl;
    cout << "Trigger de falha            = " << StubLNAutenticacao::TRIGGER_FALHA << endl;
    cout << "Trigger de erro de sistema  = " << StubLNAutenticacao::TRIGGER_ERRO_SISTEMA << endl;

    ResultadoAutenticacao resultado;

    while(true){

        // Simula a tela de apreesntacao (tela inicial) de sistema.

        cout << endl << "Tela de apresentacao de sistema." << endl;

        try{

            // Ilustra soliciatacao de serviço de autenticação.

            resultado = cntrIUAutenticacao->autenticar();
        }
        catch(const runtime_error &exp){
                 cout << "Erro de sistema." << endl;
        }

        // Critica o resultado da autenticação.

        if(resultado.getValor() == ResultadoAutenticacao::SUCESSO) {
            break;
        }
    }

    return 0;
}
