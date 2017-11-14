#include "containers.h"

ResultadoUsuario ContainerUsuario::incluir(Usuario usuario){

    ResultadoUsuario resultado;

    int chave = usuario.getMatricula().getValor();

    // Procurar o elemento.

    for(list<Usuario>::iterator elemento = container.begin(); elemento != container.end(); elemento++){

        if (elemento->getMatricula().getValor() == chave){

            // Elemento localizado.

            resultado.setValor(Resultado::FALHA);
            return resultado;
        }
    }

    // Incluir o elemento no container.

    container.push_back(usuario);
    resultado.setValor(Resultado::SUCESSO);
    return resultado;
}


ResultadoUsuario ContainerUsuario::remover(Matricula matricula){

    // Procurar e remover um elemento.

    ResultadoUsuario resultado;

    int chave = matricula.getValor();

    for(list<Usuario>::iterator elemento = container.begin(); elemento != container.end(); elemento++){

        if (elemento->getMatricula().getValor() == chave){

            // Elemento localizado.

            container.erase(elemento);
            resultado.setValor(Resultado::SUCESSO);
            return resultado;
        }
    }

    // Elemento não localizado.

    resultado.setValor(Resultado::FALHA);
    return resultado;
}

ResultadoUsuario ContainerUsuario::pesquisar(Matricula matricula){

    // Procurar elemento.

    ResultadoUsuario resultado;

    int chave = matricula.getValor();

    for(list<Usuario>::iterator elemento = container.begin(); elemento != container.end(); elemento++){

        if (elemento->getMatricula().getValor() == chave){

            // Elemento localizado.

            resultado.setUsuario(*elemento);
            resultado.setValor(Resultado::SUCESSO);
            return resultado;
        }
    }

    // Elemento não localizado.

    resultado.setValor(Resultado::FALHA);
    return resultado;
}
