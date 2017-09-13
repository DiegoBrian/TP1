#ifndef TESTES_ENTIDADES_INCLUDED
#define TESTES_ENTIDADES_INCLUDED

#include "Entidades.h"

using namespace std;

// Declaração de classe.

    /**
     *  @class TUUsuario
     *  Teste de unidade referente a classe Usuario
     */

class TUUsuario {

private:
    // Componentes de um usuário
    Nome nome;
    Apelido apelido;
    Telefone telefone;
    Senha senha;

    // Definições de constantes para evitar numeros mágicos.

    const static string NOME_VALIDO;
    const static string APELIDO_VALIDO;
    const static string TELEFONE_VALIDO;
    const static string SENHA_VALIDA;

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

    /** Executa o teste, retornando SUCESSO ou FALHA*/

    int run();
};


// Declaração de classe.

    /**
     *  @class TUResenha
     *  Teste de unidade referente a classe Resenha
     */

class TUResenha {

private:
    //Componentes de uma resenha

    Texto texto;

    // Definições de constantes para evitar numeros mágicos.

    const static string TEXTO_VALIDO;

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

    /** Executa o teste, retornando SUCESSO ou FALHA*/

    int run();
};

//

    /**
     *  @class TULivro
     *  Teste de unidade referente a classe Livro
     */

class TULivro {

private:
    // Componentes de um usuário
    Titulo titulo;
    Nome nomeAutor;
    Data data;
    Codigo codigo;
    GeneroLiterario generoLiterario;

    // Definições de constantes para evitar numeros mágicos.

    const static string TITULO_VALIDO;
    const static string AUTOR_VALIDO;
    const static string DATA_VALIDA;
    const static string VALOR_VALIDO;
    const static string GENERO_VALIDO;

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

    /** Executa o teste, retornando SUCESSO ou FALHA*/

    int run();
};
#endif // TESTES_ENTIDADES_INCLUDED
