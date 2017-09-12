#include "TestesDominio.h"

// Definições de métodos.

void TUNome::setUp(){
    nome = new Nome();
    estado = SUCESSO;
}

void TUNome::tearDown(){
    delete nome;
}

void TUNome::testarCenarioSucesso(){
    try{
        nome->setNome(NOME_VALIDO);
        if (nome->getNome() != NOME_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUNome::testarCenarioFalha(){
    try{
        nome->setNome(NOME_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUNome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//

void TUTelefone::setUp(){
    telefone = new Telefone();
    estado = SUCESSO;
}

void TUTelefone::tearDown(){
    delete telefone;
}

void TUTelefone::testarCenarioSucesso(){
    try{
        telefone->setTelefone(TELEFONE_VALIDO);
        if (telefone->getTelefone() != TELEFONE_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUTelefone::testarCenarioFalha(){
    try{
        telefone->setTelefone(TELEFONE_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUTelefone::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//

void TUTitulo::setUp(){
    titulo = new Titulo();
    estado = SUCESSO;
}

void TUTitulo::tearDown(){
    delete titulo;
}

void TUTitulo::testarCenarioSucesso(){
    try{
        titulo->setTitulo(TITULO_VALIDO);
        if (titulo->getTitulo() != TITULO_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUTitulo::testarCenarioFalha(){
    try{
        titulo->setTitulo(TITULO_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUTitulo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//

void TUCodigo::setUp(){
    codigo = new Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown(){
    delete codigo;
}

void TUCodigo::testarCenarioSucesso(){
    try{
        codigo->setCodigo(VALOR_VALIDO);
        if (codigo->getCodigo() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha(){
    try{
        codigo->setCodigo(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUCodigo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//

void TUGeneroLiterario::setUp(){
    generoLiterario = new GeneroLiterario();
    estado = SUCESSO;
}

void TUGeneroLiterario::tearDown(){
    delete generoLiterario;
}

void TUGeneroLiterario::testarCenarioSucesso(){
    try{
        generoLiterario->setGeneroLiterario(GENERO_VALIDO);
        if (generoLiterario->getGeneroLiterario() != GENERO_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUGeneroLiterario::testarCenarioFalha(){
    try{
        generoLiterario->setGeneroLiterario(GENERO_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUGeneroLiterario::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
