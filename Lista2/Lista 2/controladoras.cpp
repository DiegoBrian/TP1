#include "controladoras.h"

ResultadoAutenticacao CntrIUAutenticacao::autenticar() throw(runtime_error) {

    ResultadoAutenticacao resultado;
    Apelido apelido;
    Senha senha;
    std::string entrada;

    // Solicitar matricula e senha.

    while(true) {

        cout << endl << "Autenticacao de usuario." << endl << endl;

        try {
            cout << "Digite a matricula : ";
            cin >> entrada;
            apelido.setApelido(entrada);
            cout << "Digite a senha     : ";
            cin >> entrada;
            senha.setSenha(entrada);
            break;
        }
        catch (const invalid_argument &exp) {
            cout << endl << "Dado em formato incorreto." << endl;
        }
    }

    // Solicitar autentica��o.

    resultado = cntrLNAutenticacao->autenticar(apelido, senha);

    // Informar resultado da autentica��o.

    if(resultado.getValor() == ResultadoAutenticacao::FALHA)
    cout << endl << "Falha na autenticacao." << endl;

    return resultado;
}


