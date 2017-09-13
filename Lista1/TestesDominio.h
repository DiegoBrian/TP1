#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "Dominio.h"

using namespace std;

// Declaração de classe.

    /**
     *  @class TUNome
     *  Teste de unidade referente a classe Nome. Realiza um teste de caso de sucesso e um de caso de falha.
     */

class TUNome {

private:

    // Definições de constantes para evitar numeros mágicos.

    const static string NOME_VALIDO;
    const static string NOME_INVALIDO;

    // Referência para o objeto a ser testado.

    Nome *nome;

    // Estado do teste.

    int estado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

/**
     *  @class TUTelefone
     *  Teste de unidade referente a classe Telefone. Realiza um teste de caso de sucesso e um de caso de falha.
     */

class TUTelefone {

private:

    // Definições de constantes para evitar numeros mágicos.

    const static string TELEFONE_VALIDO;
    const static string TELEFONE_INVALIDO;

    // Referência para o objeto a ser testado.

    Telefone *telefone;

    // Estado do teste.

    int estado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

/**
     *  @class TUTitulo
     *  Teste de unidade referente a classe Titulo. Realiza um teste de caso de sucesso e um de caso de falha.
     */

class TUTitulo {

private:

    // Definições de constantes para evitar numeros mágicos.

    const static string TITULO_VALIDO;
    const static string TITULO_INVALIDO;

    // Referência para o objeto a ser testado.

    Titulo *titulo;

    // Estado do teste.

    int estado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

/**
     *  @class TUCodigo
     *  Teste de unidade referente a classe Codigo. Realiza um teste de caso de sucesso e um de caso de falha.
     */

class TUCodigo {

private:

    // Defini��es de constantes para evitar numeros m�gicos.

    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;

    // Refer�ncia para o objeto a ser testado.

    Codigo *codigo;

    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

/**
     *  @class TUGeneroLiterario
     *  Teste de unidade referente a classe GeneroLiterario. Realiza um teste de caso de sucesso e um de caso de falha.
     */

class TUGeneroLiterario {

private:

    // Defini��es de constantes para evitar numeros m�gicos.

    const static string GENERO_VALIDO;
    const static string GENERO_INVALIDO ;
    // Refer�ncia para o objeto a ser testado.

    GeneroLiterario *generoLiterario;

    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

/**
     *  @class TUApelido
     *  Teste de unidade referente a classe Apelido. Realiza um teste de caso de sucesso e um de caso de falha.
     */

class TUApelido {

private:

    // Definições de constantes para evitar numeros mágicos.

    const static string APELIDO_VALIDO;
    const static string APELIDO_INVALIDO;

    // Referência para o objeto a ser testado.

    Apelido *apelido;

    // Estado do teste.

    int estado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

/**
     *  @class TUSenha
     *  Teste de unidade referente a classe Senha. Realiza um teste de caso de sucesso e um de caso de falha.
     */

class TUSenha {

private:

    // Definições de constantes para evitar numeros mágicos.

    const static string SENHA_VALIDA;
    const static string SENHA_INVALIDA;

    // Referência para o objeto a ser testado.

    Senha *senha;

    // Estado do teste.

    int estado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

/**
     *  @class TUData
     *  Teste de unidade referente a classe Data. Realiza um teste de caso de sucesso e um de caso de falha.
     */

class TUData {

private:

    // Definições de constantes para evitar numeros mágicos.

    const static string DATA_VALIDA;
    const static string DATA_INVALIDA;

    // Referência para o objeto a ser testado.

    Data *data;

    // Estado do teste.

    int estado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

/**
     *  @class TUTexto
     *  Teste de unidade referente a classe Texto. Realiza um teste de caso de sucesso e um de caso de falha.
     */


class TUTexto {

private:

    // Definições de constantes para evitar numeros mágicos.

    const static string TEXTO_VALIDO;
    const static string TEXTO_INVALIDO;

    // Referência para o objeto a ser testado.

    Texto *texto;

    // Estado do teste.

    int estado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

#endif // TESTES_H_INCLUDED

