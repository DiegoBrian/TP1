#include "stubs.h"


// Definições de método da classe stub do controlador da lógica de negócio de autenticação.

Resultado StubLNAutenticacao::autenticar(const Matricula &matricula, const Senha &senha) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubLNAutenticacao::autenticar" << endl ;

    cout << "Matricula = " << matricula.getValor() << endl ;
    cout << "Senha     = " << senha.getValor()     << endl ;

    ResultadoAutenticacao resultado;

    // Diferentes comportamentos dependendo do valor da matrícula.

    switch(matricula.getValor()){
        case TRIGGER_FALHA:
            resultado.setValor(ResultadoAutenticacao::FALHA);
            break;
        case TRIGGER_ERRO_SISTEMA:
            throw runtime_error("Erro de sistema");
        default:
            resultado.setValor(ResultadoAutenticacao::SUCESSO);
        }

    return resultado;
}

// Definições de método da classe stub do controlador da lógica de negócio de gerente.

Resultado StubLNGerente::incluir(const Gerente &gerente) throw(runtime_error){

    // Apresentar dados recebidos.

    cout << endl << "StubLNGerente::incluir" << endl ;

    Resultado resultado;

    resultado.setValor(Resultado::SUCESSO);

    // Diferentes comportamentos dependendo do valor da matrícula.

    switch(gerente.getMatricula().getValor()){
        case TRIGGER_FALHA:
            resultado.setValor(ResultadoAutenticacao::FALHA);
            break;
        case TRIGGER_ERRO_SISTEMA:
            throw runtime_error("Erro de sistema");
        default:
            resultado.setValor(ResultadoAutenticacao::SUCESSO);
        }

    return resultado;
}

Resultado StubLNGerente::remover(const Matricula &matricula) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubLNGerente::remover" << endl ;

    Resultado resultado;

    resultado.setValor(Resultado::SUCESSO);

    // Diferentes comportamentos dependendo do valor da matrícula.

    switch(matricula.getValor()){
        case TRIGGER_FALHA:
            resultado.setValor(ResultadoAutenticacao::FALHA);
            break;
        case TRIGGER_ERRO_SISTEMA:
            throw runtime_error("Erro de sistema");
        default:
            resultado.setValor(ResultadoAutenticacao::SUCESSO);
        }

    return resultado;
}

ResultadoGerente StubLNGerente::pesquisar(const Matricula &matricula) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubLNGerente::pesquisar" << endl ;

    ResultadoGerente resultado;

    resultado.setValor(Resultado::SUCESSO);

    // A seguir devem ser implementados os diferentes comportamentos.

    // Sucesso.

    // Falha.

    // Erro de sistema.

    return resultado;
}

Resultado StubLNGerente::editar(const Gerente &gerente) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubLNGerente::editar" << endl ;

    Resultado resultado;

    resultado.setValor(Resultado::SUCESSO);

    // A seguir devem ser implementados os diferentes comportamentos.

    // Sucesso.

    // Falha.

    // Erro de sistema.

    return resultado;
}
