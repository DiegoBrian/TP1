#include "stubs.h"

//Definições de constantes.

const string StubLNAutenticacao::TRIGGER_FALHA = "falha";
const string StubLNAutenticacao::TRIGGER_ERRO_SISTEMA = "error";
const string StubLNEstante::TRIGGER_FALHA = "falha titulo";
const string StubLNEstante::TRIGGER_ERRO_SISTEMA = "error titulo";
// EXEMPLO
// --------------------------------------------------------

// Definições de método da classe stub do controlador da lógica de negócio de autenticação.

ResultadoAutenticacao StubLNAutenticacao::autenticar(const Apelido &apelido, const Senha &senha) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubLNAutenticacao::autenticar" << endl ;

    cout << "Apelido = " << apelido.getApelido() << endl ;
    cout << "Senha   = " << senha.getSenha()     << endl ;

    ResultadoAutenticacao resultado;

    // Diferentes comportamentos dependendo do valor do apelido.

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



ResultadoEstante StubLNEstante::buscar(const Titulo &titulo) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubLNEstante::buscar" << endl ;

    cout << "Titulo = " << titulo.getTitulo() << endl ;

    ResultadoEstante resultado;

    // Diferentes comportamentos dependendo do valor do titulo.

    if(titulo.getTitulo().compare(TRIGGER_FALHA)==0){
            resultado.setValor(ResultadoAutenticacao::FALHA);
    }

    else if (titulo.getTitulo().compare(TRIGGER_ERRO_SISTEMA)==0){
            throw runtime_error("Erro de sistema");
    }

    else{
            resultado.setValor(ResultadoAutenticacao::SUCESSO);
            resultado.setTitulo(titulo);
        }

    return resultado;
}



