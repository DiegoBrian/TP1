// Exemplos desenvolvidos para ilustrar classes containers.

#include <iostream>
#include <string>
#include <list>

#include "dominios.h"
#include "entidades.h"
#include "containers.h"

using namespace std;

    // EXEMPLO DE CLASSE CONTAINER
    // ---------------------------

int main() {

    // Criar objetos a serem armazenados no container.

    Usuario usuario_1, usuario_2, usuario_3, usuario_4;

    Matricula matricula_1, matricula_2, matricula_3, matricula_4;

    Senha senha_1, senha_2, senha_3, senha_4;

    matricula_1.setValor(10);
    matricula_2.setValor(20);
    matricula_3.setValor(30);
    matricula_4.setValor(40);

    senha_1.setValor(500);
    senha_2.setValor(600);
    senha_3.setValor(700);
    senha_4.setValor(800);

    usuario_1.setMatricula(matricula_1);
    usuario_1.setSenha(senha_1);

    usuario_2.setMatricula(matricula_2);
    usuario_2.setSenha(senha_2);

    usuario_3.setMatricula(matricula_3);
    usuario_3.setSenha(senha_3);

    usuario_4.setMatricula(matricula_4);
    usuario_4.setSenha(senha_4);

    ResultadoUsuario resultado;

    // Criar um container.

    ContainerUsuario container;

    // Exemplos de sucesso na inclusão.

    resultado = container.incluir(usuario_1);

    if(resultado.getValor() == Resultado::FALHA){
        cout << "Erro na inclusao" << endl;
    }
    else {
        cout << "Sucesso na inclusao" << endl;
    }

    resultado = container.incluir(usuario_2);

    if(resultado.getValor() == Resultado::FALHA){
        cout << "Erro na inclusao" << endl;
    }
    else {
        cout << "Sucesso na inclusao" << endl;
    }

    resultado = container.incluir(usuario_3);

    if(resultado.getValor() == Resultado::FALHA){
        cout << "Erro na inclusao" << endl;
    }
    else {
        cout << "Sucesso na inclusao" << endl;
    }

    // Exemplo de erro na inclusão.

    // Tentativa de incluir elemento presente no container.

    resultado = container.incluir(usuario_1);

    if(resultado.getValor() == Resultado::FALHA){
        cout << "Erro na inclusao" << endl;
    }
    else {
        cout << "Sucesso na inclusao" << endl;
    }

    // Exemplo de sucesso na remoção.

    resultado = container.remover(matricula_2);

    if(resultado.getValor() == Resultado::FALHA){
        cout << "Erro na remocao" << endl;
    }
    else {
        cout << "Sucesso na remocao" << endl;
    }

    // Exemplos de erros na remoção.

    // Tentativa de remover elemento ausente do container.

    resultado = container.remover(matricula_2);

    if(resultado.getValor() == Resultado::FALHA){
        cout << "Erro na remocao" << endl;
    }
    else {
        cout << "Sucesso na remocao" << endl;
    }

    // Tentativa de remover elemento ausente do container.

    resultado = container.remover(matricula_4);

    if(resultado.getValor() == Resultado::FALHA){
        cout << "Erro na remocao" << endl;
    }
    else {
        cout << "Sucesso na remocao" << endl;
    }

    // Exemplo de erro na procura de elemento no container.

    resultado = container.pesquisar(matricula_2);


    if(resultado.getValor() == ResultadoUsuario::FALHA){
        cout << "Usuario nao encontrado" << endl;
    }
    else{
        cout << "Usuario encontrado" << endl;
        cout << "Matricula = " << resultado.getUsuario().getMatricula().getValor() << endl;
        cout << "Senha     = " << resultado.getUsuario().getSenha().getValor() << endl;
    }

    // Exemplos de sucesso na procura de elementos no container.

    resultado = container.pesquisar(matricula_1);

    if(resultado.getValor() == ResultadoUsuario::FALHA){
        cout << "Usuario nao encontrado" << endl;
    }
    else{
        cout << "Usuario encontrado" << endl;
        cout << "Matricula = " << resultado.getUsuario().getMatricula().getValor() << endl;
        cout << "Senha     = " << resultado.getUsuario().getSenha().getValor() << endl;
    }

    resultado = container.pesquisar(matricula_3);

    if(resultado.getValor() == ResultadoUsuario::FALHA){
        cout << "Usuario nao encontrado" << endl;
    }
    else{
        cout << "Usuario encontrado" << endl;
        cout << "Matricula = " << resultado.getUsuario().getMatricula().getValor() << endl;
        cout << "Senha     = " << resultado.getUsuario().getSenha().getValor() << endl;
    }

    return 0;
}
