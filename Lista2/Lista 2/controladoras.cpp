#include "controladoras.h"

ResultadoAutenticacao CntrIUAutenticacao::autenticar() throw(runtime_error) {

    ResultadoAutenticacao resultado;
    Apelido apelido;
    Senha senha;
    std::string entrada;

    // Solicitar apelido e senha.

    while(true) {

        cout << endl << "Autenticacao de usuario." << endl << endl;

        try {
            cout << "Digite o apelido : ";
            cin >> entrada;
            apelido.setApelido(entrada);
            cout << "Digite a senha     : ";
            cin >> entrada;
            senha.setSenha(entrada);
            break;
        }
        catch (const invalid_argument &exp) {
            cout << endl << "Dado em formato incorreto ou dado invalido." << endl;
        }
    }

    // Solicitar autentica��o.

    resultado = cntrLNAutenticacao->autenticar(apelido, senha);

    // Informar resultado da autentica��o.

    if(resultado.getValor() == ResultadoAutenticacao::FALHA)
    cout << endl << "Falha na autenticacao." << endl;

    return resultado;
}

ResultadoEstante CntrIUEstante::buscar() throw(runtime_error) {

    ResultadoEstante resultado;
    Titulo titulo;
    std::string entrada;

    // Solicitar titulo.

    while(true) {

        cout << endl << "Estante de usuario." << endl << endl;

        try {
            cout << "Digite o titulo do livro : ";
            cin >> entrada;
            titulo.setTitulo(entrada);
            break;
        }
        catch (const invalid_argument &exp) {
            cout << endl << "Dado em formato incorreto ou dado invalido." << endl;
        }
    }

    // Solicitar titulo.

    resultado = cntrLNEstante->buscar(titulo);

    // Informar resultado da busca.

    if(resultado.getValor() == ResultadoEstante::FALHA)
    cout << endl << "Falha na busca." << endl;

    return resultado;
}

