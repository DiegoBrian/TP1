#include "TestesDominio.h"

// Definições de métodos.

    const string TUNome::NOME_VALIDO   = "";
    const string TUNome::NOME_INVALIDO = "123456789";

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

    const string TUTelefone::TELEFONE_VALIDO   = "(61)-123456789";
    const string TUTelefone::TELEFONE_INVALIDO = "123456789";

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

    const string TUTitulo::TITULO_VALIDO   = "Teste de Titulo";
    const string TUTitulo::TITULO_INVALIDO = "Titulo  invalido";

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

    const string TUCodigo::VALOR_VALIDO   = "12345";
    const string TUCodigo::VALOR_INVALIDO = "123456";

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

// Defini��es de constantes para evitar numeros m�gicos.

    const string TUGeneroLiterario::GENERO_VALIDO = "Novela";
    const string TUGeneroLiterario::GENERO_INVALIDO = "Comedia";

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

const string TUApelido::APELIDO_VALIDO = ("ABCDE");
const string TUApelido::APELIDO_INVALIDO = ("876578");
// Definições de métodos.

void TUApelido::setUp(){
    apelido = new Apelido();
    estado = SUCESSO;
}

void TUApelido::tearDown(){
    delete apelido;
}

void TUApelido::testarCenarioSucesso(){
    //const string TUApelido::APELIDO_VALIDO = ("ABCDE");
    //const string TUApelido::APELIDO_INVALIDO = ("876578");

    try{
        apelido->setApelido(APELIDO_VALIDO);
        if (apelido->getApelido() != APELIDO_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUApelido::testarCenarioFalha(){
    try{
        apelido->setApelido(APELIDO_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUApelido::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


void TUSenha::setUp(){
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown(){
    delete senha;
}

const string TUSenha::SENHA_VALIDA = ("ABCD");
const string TUSenha::SENHA_INVALIDA = ("AAS8");

void TUSenha::testarCenarioSucesso(){
    //const string TUSenha::SENHA_VALIDA = ("ABCD");
    //const string TUSenha::SENHA_INVALIDA = ("AAS8");

    try{
        senha->setSenha(SENHA_VALIDA);
        if (senha->getSenha() != SENHA_VALIDA)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha(){
    try{
        senha->setSenha(SENHA_INVALIDA);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

const string TUData::DATA_VALIDA = ("04/10/96");
const string TUData::DATA_INVALIDA = ("00/99/99");

void TUData::setUp(){
    data = new Data();
    estado = SUCESSO;
}

void TUData::tearDown(){
    delete data;
}

void TUData::testarCenarioSucesso(){
    //const string TUData::DATA_VALIDA = ("ABCDE");
    //const string TUData::DATA_INVALIDA = ("876578");

    try{
        data->setData(DATA_VALIDA);
        if (data->getData() != DATA_VALIDA)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha(){
    try{
        data->setData(DATA_INVALIDA);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUData::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

const string TUTexto::TEXTO_VALIDO = ("Hello, world");
const string TUTexto::TEXTO_INVALIDO = ("01234567890123456789012345678901234567890123456789");

void TUTexto::setUp(){
    texto = new Texto();
    estado = SUCESSO;
}

void TUTexto::tearDown(){
    delete texto;
}

void TUTexto::testarCenarioSucesso(){
    //const string TUTexto::TEXTO_VALIDO = ("ABCDE");
    //const string TUTexto::TEXTO_INVALIDO = ("876578");

    try{
        texto->setTexto(TEXTO_VALIDO);
        if (texto->getTexto() != TEXTO_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUTexto::testarCenarioFalha(){
    try{
        texto->setTexto(TEXTO_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUTexto::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

