#include "containers.h"

ResultadoUsuario ContainerUsuario::incluir(Usuario usuario){

    ResultadoUsuario resultado;

    string chave = usuario.getApelido().getApelido();

    // Procurar o elemento.

    for(list<Usuario>::iterator elemento = container.begin(); elemento != container.end(); elemento++){

        if (elemento->getApelido().getApelido().compare(chave)==0){

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
