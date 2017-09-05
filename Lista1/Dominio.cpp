#include "Dominio.h"

//Definições de constantes.

// Definições de métodos.

void Nome::validarNome(string nome) throw (invalid_argument){

    // Lança exceção se o tamanho da string for maior que o tamanho maximo definido.

    if (nome.length() > TAMANHO_MAXIMO)
        throw invalid_argument("Argumento invalido.");

    // Lança exceção se a string não é formada por letras, espaço em branco, ou ponto
    for (unsigned int i = 0; i < nome.length(); i++){
    	if ((nome[i] != ' ') && (nome[i] != '.') &&
    		(nome[i] < 'A' || (nome[i] > 'Z' && nome[i] < 'a') || nome[i] > 'Z') ){
    		throw invalid_argument("Argumento invalido.");
    	}
    }
}

void Nome::setNome(string nome) throw (invalid_argument){
    validarNome(nome);
    this->nome = nome;
}

void Telefone::validarTelefone(string telefone) throw (invalid_argument){

    // Lança exceção se tamanho do telefone for diferente do tamanho definido.

    if (telefone.length() != TAMANHO)
        throw invalid_argument("Argumento invalido.");

    //Lança exceção se o formato do telefone nao estiver de acordo com o formato definido
    if (telefone[0] != '(' || telefone[3] != ')' || telefone[4] != '-')
        throw invalid_argument("Argumento invalido.");

    for (unsigned int i = 1; i <= 2; i++){
    	if (telefone[i] < 48 || telefone[i]> 57){
    		throw invalid_argument("Argumento invalido.");
    	}
    }

    for (unsigned int i = 4; i < telefone.length(); i++){
    	if (telefone[i] < 48 || telefone[i]> 57){
    		throw invalid_argument("Argumento invalido.");
    	}
    }

}

void Telefone::setTelefone(string telefone) throw (invalid_argument){
    validarTelefone(telefone);
    this->telefone = telefone;
}

void Titulo::validarTitulo(string titulo) throw (invalid_argument){

    // Lança exceção se valor for menor que o limite definido.

    if (titulo.length() > TAMANHO_MAXIMO)
        throw invalid_argument("Argumento invalido.");

    // Lança exceção se houverem espaços em branco duplicados
    for (unsigned int i = 1; i < titulo.length(); i++){
    	if (titulo[i] == ' ' && titulo[i-1] == ' '){
    		throw invalid_argument("Argumento invalido.");
    	}
    }
}

void Titulo::setTitulo(string titulo) throw (invalid_argument){
    validarTitulo(titulo);
    this->titulo = titulo;
}


void Codigo::validarCodigo(string codigo) throw (invalid_argument){

    // Lança exceção se tamanho do codigo for diferente do tamanho definido.

    if (codigo.length() != TAMANHO)
        throw invalid_argument("Argumento invalido.");

    //Lança exceção se o formato do codigo nao estiver de acordo com o formato definido
    for (unsigned int i = 0; i < codigo.length(); i++){
    	if (codigo[i] < 48 || codigo[i]> 57){
    		throw invalid_argument("Argumento invalido.");
    	}
    }
}

void Codigo::setCodigo(string codigo) throw (invalid_argument){
    validarCodigo(codigo);
    this->codigo = codigo;
}
