#include "stubs.h"

//Definições de constantes.

const string StubLNAutenticacao::TRIGGER_FALHA = "falha";
const string StubLNAutenticacao::TRIGGER_ERRO_SISTEMA = "error";
const string StubLNEstante::TRIGGER_FALHA = "falha titulo";
const string StubLNEstante::TRIGGER_ERRO_SISTEMA = "error titulo";
const string StubLNEstante::TRIGGER_SUCESSO = "Romeu";
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
            cout << endl << "USUARIO AUTENTICADO COM SUCESSO" << endl;
        }

    return resultado;
}



ResultadoBuscaLivro StubLNEstante::buscarlivro(const Titulo &titulo) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubLNEstante::buscarlivro" << endl ;

    cout << "Titulo = " << titulo.getTitulo() << endl ;

    ResultadoBuscaLivro resultado;

    // Diferentes comportamentos dependendo do valor do titulo.

    if(titulo.getTitulo().compare(TRIGGER_FALHA)==0){
            resultado.setValor(ResultadoAutenticacao::FALHA);
    }

    else if (titulo.getTitulo().compare(TRIGGER_ERRO_SISTEMA)==0){
            throw runtime_error("Erro de sistema");
    }
    else if (titulo.getTitulo().compare(TRIGGER_SUCESSO)==0){
        cout << endl << "Titulo = " << titulo.getTitulo() << endl ;
        cout << "Autor = Fulano de tal" << endl ;
        cout << "Data de publicacao = 09/09/09" << endl ;
        cout << "Genero Literario = Novela" << endl ;
        cout << "Resenha =  'Livro sensacional'" << endl ;
    }

    else{
            resultado.setValor(ResultadoAutenticacao::SUCESSO);
            resultado.setTitulo(titulo);
        }

    return resultado;
}

ResultadoInsercao StubLNEstante::inserir(const Titulo &titulo, const Nome &nomeAutor, const Data &data, const Codigo &codigo, const GeneroLiterario &generoLiterario) throw(runtime_error){

    // Apresentar dados recebidos.

    cout << endl << "StubLNEstante::inserir" << endl ;

    cout << endl << "Titulo = " << titulo.getTitulo() << endl ;
    cout << "Nome do Autor = " << nomeAutor.getNome() << endl ;
    cout << "Data de publicacao = " << data.getData() << endl ;
    cout << "Codigo = " << codigo.getCodigo() << endl ;
    cout << "Genero literario = " << generoLiterario.getGeneroLiterario() << endl ;

    ResultadoInsercao resultado;

    // Diferentes comportamentos dependendo do valor do titulo.

    if(titulo.getTitulo().compare(TRIGGER_FALHA)==0){
            resultado.setValor(ResultadoAutenticacao::FALHA);
    }

    else if (titulo.getTitulo().compare(TRIGGER_ERRO_SISTEMA)==0){
            throw runtime_error("Erro de sistema");
    }

    else{
            resultado.setValor(ResultadoInsercao::SUCESSO);
            resultado.setTitulo(titulo);
            cout << endl << "LIVRO INSERIDO COM SUCESSO" << endl;
        }

    return resultado;

}

//Definições de constantes.

const string StubLNUsuarios::TRIGGER_FALHA = "falha";
const string StubLNUsuarios::TRIGGER_ERRO_SISTEMA = "error";

// EXEMPLO
// --------------------------------------------------------

// Definições de método da classe stub do controlador da lógica de negócio de autenticação.

int StubLNUsuarios::cadastrar(const Usuario &usuario) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubLNUsuarios::cadastrar" << endl ;

    cout << "Nome = " << usuario.getNome().getNome() << endl ;
    cout << "Apelido = " << usuario.getApelido().getApelido() << endl ;
    cout << "Telefone = " << usuario.getTelefone().getTelefone() << endl ;
    cout << "Senha     = " << usuario.getSenha().getSenha()     << endl ;

    int resultado;

    // Diferentes comportamentos dependendo do valor da matrícula.

    if(usuario.getApelido().getApelido().compare(TRIGGER_FALHA)==0){
            resultado = (Resultado::FALHA);
    }

    else if (usuario.getApelido().getApelido().compare(TRIGGER_ERRO_SISTEMA)==0){
            throw runtime_error("Erro de sistema");
    }

    else{
            resultado = Resultado::SUCESSO;
            cout << endl << "USUARIO CADASTRADO COM SUCESSO" << endl;
        }

    return resultado;
}



