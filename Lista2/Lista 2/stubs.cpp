#include "stubs.h"

//Defini��es de constantes.

const string StubLNAutenticacao::TRIGGER_FALHA = "67890";
const string StubLNAutenticacao::TRIGGER_ERRO_SISTEMA = "78901";

// EXEMPLO
// --------------------------------------------------------

// Defini��es de m�todo da classe stub do controlador da l�gica de neg�cio de autentica��o.

ResultadoAutenticacao StubLNAutenticacao::autenticar(const Apelido &apelido, const Senha &senha) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubLNAutenticacao::autenticar" << endl ;

    cout << "Apelido = " << apelido.getApelido() << endl ;
    cout << "Senha     = " << senha.getSenha()     << endl ;

    ResultadoAutenticacao resultado;

    // Diferentes comportamentos dependendo do valor da matr�cula.

    if(apelido.getApelido().compare(TRIGGER_FALHA)==0){
            resultado.setValor(ResultadoAutenticacao::FALHA);
    }

    else if (apelido.getApelido().compare(TRIGGER_ERRO_SISTEMA)==0){
            throw runtime_error("Erro de sistema");
    }

    else{
            resultado.setValor(ResultadoAutenticacao::SUCESSO);
            resultado.setApelido(apelido);
        }

    return resultado;
}


