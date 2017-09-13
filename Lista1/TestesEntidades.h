#ifndef TESTES_ENTIDADES_INCLUDED
#define TESTES_ENTIDADES_INCLUDED

#include "Entidades.h"

using namespace std;

// Declaração de classe.

class TUUsuario {

private:
    // Componentes de um usuário
    Nome nome;
    Apelido apelido;
    Telefone telefone;
    Senha senha;

    // Definições de constantes para evitar numeros mágicos.

    std::string NOME_VALIDO   = "Diego";
    std::string APELIDO_VALIDO   = "dbcl";
    std::string TELEFONE_VALIDO   = "(61)-123456789";
    std::string SENHA_VALIDA   = "ABCD";

    // Referência para o objeto a ser testado.

    Usuario *usuario;

    // Estado do teste.

    int estado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};


// Declaração de classe.

class TUResenha {

private:
    //Componentes de uma resenha

    Texto texto;
    
    // Referência para o objeto a ser testado.

    Resenha *resenha;

    // Estado do teste.

    int estado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

//

class TULivro {

private:
    // Componentes de um usuário
    Titulo titulo;
    Nome nomeAutor;
    Data data;
    Codigo codigo;
    GeneroLiterario generoLiterario;

    // Definições de constantes para evitar numeros mágicos.

    std::string TITULO_VALIDO   = "Titulo Valido";
    std::string AUTOR_VALIDO = "Autor";
    std::string DATA_VALIDA   = "01/02/03";
    std::string VALOR_VALIDO   = "12345";
    std::string GENERO_VALIDO   = "Novela";

    // Referência para o objeto a ser testado.

    Livro *livro;

    // Estado do teste.

    int estado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};
#endif // TESTES_ENTIDADES_INCLUDED
