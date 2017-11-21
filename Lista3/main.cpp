// Exemplos desenvolvidos para ilustrar classes containers.

#include <iostream>
#include <string>
#include <list>

#include "Dominio.h"
#include "Entidades.h"
#include "Containers.h"

using namespace std;

    // EXEMPLO DE CLASSE CONTAINER
    // ---------------------------

int main() {

    // Criar objetos a serem armazenados no container.

    Usuario usuario_1, usuario_2, usuario_3, usuario_4;

    Apelido apelido_1, apelido_2, apelido_3, apelido_4;

    Senha senha_1, senha_2, senha_3, senha_4;

    Nome nome_1, nome_2, nome_3, nome_4;

    Telefone tel_1, tel_2, tel_3, tel_4;

    apelido_1.setApelido("ab");
    apelido_2.setApelido("cd");
    apelido_3.setApelido("ef");
    apelido_4.setApelido("gh");

    senha_1.setSenha("abcd");
    senha_2.setSenha("cdef");
    senha_3.setSenha("efgh");
    senha_4.setSenha("ghij");

    nome_1.setNome("nome um");
    nome_1.setNome("nome dois");
    nome_1.setNome("nome tres");
    nome_1.setNome("nome quatro");

    tel_1.setTelefone("(11)-111111111");
    tel_2.setTelefone("(22)-222222222");
    tel_3.setTelefone("(33)-333333333");
    tel_4.setTelefone("(44)-444444444");

    usuario_1.setApelido(apelido_1);
    usuario_1.setSenha(senha_1);
    usuario_1.setNome(nome_1);
    usuario_1.setTelefone(tel_1);

    usuario_2.setApelido(apelido_2);
    usuario_2.setSenha(senha_2);
    usuario_2.setNome(nome_2);
    usuario_2.setTelefone(tel_2);

    usuario_3.setApelido(apelido_3);
    usuario_3.setSenha(senha_3);
    usuario_3.setNome(nome_3);
    usuario_3.setTelefone(tel_3);

    usuario_4.setApelido(apelido_4);
    usuario_4.setSenha(senha_4);
    usuario_4.setNome(nome_4);
    usuario_4.setTelefone(tel_4);

    ResultadoUsuario resultado;

    // Criar um container.

    ContainerUsuario container;

    // Exemplos de sucesso na inclus�o.

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

    // Exemplo de erro na inclus�o.

    // Tentativa de incluir elemento presente no container.

    resultado = container.incluir(usuario_1);

    if(resultado.getValor() == Resultado::FALHA){
        cout << "Erro na inclusao" << endl;
    }
    else {
        cout << "Sucesso na inclusao" << endl;
    }



    return 0;
}
