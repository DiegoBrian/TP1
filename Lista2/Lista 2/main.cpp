// Exemplos desenvolvidos para ilustrar a sintaxe da linguagem.

#include <stdexcept>
#include <iostream>
#include <string>

#include "Dominio.h"
#include "Entidades.h"
#include "interfaces.h"
#include "controladoras.h"
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
    IUEstante  *cntrIUEstante = new CntrIUEstante();
    ILNEstante *stubLNEstante = new StubLNEstante();

    // Liga instância da controladora de interacao a instância do stub na camada de serviço.

    cntrIUAutenticacao->setCntrLNAutenticacao(stubLNAutenticacao);

    // Para facilitar o teste informa os valores inválidos.

    cout << endl << "VALORES DOS TRIGGERS:" << endl << endl;
    cout << "Apelido invalido          = " << Apelido::APELIDO_INVALIDO << endl;
    cout << "Senha invalida              = " << Senha::SENHA_INVALIDA << endl;
    cout << "Trigger de falha            = " << StubLNAutenticacao::TRIGGER_FALHA << endl;
    cout << "Trigger de erro de sistema  = " << StubLNAutenticacao::TRIGGER_ERRO_SISTEMA << endl;

    ResultadoAutenticacao resultado;
    ResultadoEstante resultado2;

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

    while(true){

        // Simula a tela de busca por titulo.

        cout << endl << "Tela de busca por titulo." << endl;

        try{

            // Ilustra soliciatacao de serviço de busca.

            resultado2 = cntrIUEstante->buscar();
        }
        catch(const runtime_error &exp){
                 cout << "Erro de sistema." << endl;
        }

        // Critica o resultado da busca na estante.

        if(resultado2.getValor() == ResultadoEstante::SUCESSO) {
            break;
        }
    }


    return 0;
}
