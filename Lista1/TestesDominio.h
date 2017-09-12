#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "Dominio.h"

using namespace std;

// Declaração de classe.

class TUNome {

private:

    // Definições de constantes para evitar numeros mágicos.

    std::string NOME_VALIDO   = "";
    std::string NOME_INVALIDO = "123456789";

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

class TUTelefone {

private:

    // Definições de constantes para evitar numeros mágicos.

    std::string TELEFONE_VALIDO   = "(61)-123456789";
    std::string TELEFONE_INVALIDO = "123456789";

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

class TUTitulo {

private:

    // Definições de constantes para evitar numeros mágicos.

    std::string TITULO_VALIDO   = "Teste de Titulo";
    std::string TITULO_INVALIDO = "Titulo  invalido";

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

class TUCodigo {

private:

    // Defini��es de constantes para evitar numeros m�gicos.

    std::string VALOR_VALIDO   = "12345";
    std::string VALOR_INVALIDO = "123456";

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

class TUGeneroLiterario {

private:

    // Defini��es de constantes para evitar numeros m�gicos.

    std::string GENERO_VALIDO = "Novela";
    std::string GENERO_INVALIDO = "Comedia";
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

#endif // TESTES_H_INCLUDED

