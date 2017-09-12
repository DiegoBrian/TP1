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
    		(nome[i] < 'A' || nome[i] > 'Z') && (nome[i] < 'a' || nome[i] > 'z')){
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
    	if (telefone[i] < '0' || telefone[i]> '9'){
    		throw invalid_argument("Argumento invalido.");
    	}
    }

    for (unsigned int i = 5; i < telefone.length(); i++){
    	if (telefone[i] < '0' || telefone[i]> '9'){
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

void GeneroLiterario::validarGeneroLiterario(string generoLiterario) throw (invalid_argument){

    //Lança exceção se o genero literario nao estiver de acordo com as opções definidas
    if(generoLiterario.compare("Epopeia") != 0 &&
       generoLiterario.compare("Novela") != 0 &&
       generoLiterario.compare("Conto") != 0 &&
       generoLiterario.compare("Ensaio") != 0 &&
       generoLiterario.compare("Romance") != 0){
            throw invalid_argument("Argumento invalido.");
       }
}

void GeneroLiterario::setGeneroLiterario(string generoLiterario) throw (invalid_argument){
    validarGeneroLiterario(generoLiterario);
    this->generoLiterario = generoLiterario;
}


void Apelido::validar (string apelido) throw (invalid_argument){
    unsigned int i;
    if (apelido.length()>LIMITE_APELIDO){
        throw invalid_argument ("Argumento invalido.");
    }
    for (i=0; i<apelido.length(); i++){
        if (apelido[i]<65 || (apelido[i]>90 && apelido[i]<97) || apelido[i]>122){
            throw invalid_argument ("Argumento invalido.");
        }
    }
}

void Apelido::setApelido(string apelido) throw (invalid_argument){
    validar(apelido);
    this->apelido = apelido;
}

void Senha::validar (string senha) throw (invalid_argument){
    unsigned int i, j;
    if (senha.length()>LIMITE_SENHA){
        throw invalid_argument ("Argumento invalido.");
    }

    for (i=0; i<senha.length(); i++){
        if (senha[i]<65 || (senha[i]>90 && senha[i]<97) || senha[i]>122){
            throw invalid_argument ("Argumento invalido.");
        }
    }

    for(i=0; i<senha.length(); i++){
        for(j=0; j<senha.length(); j++){
            if(i!=j && senha[j]==senha[i]){
                throw invalid_argument("Argumento invalido.");
            }
        }
    }

}

void Senha::setSenha (string senha) throw (invalid_argument){
    validar(senha);
    this->senha = senha;
}

void Data::validar (string data) throw (invalid_argument){
    //unsigned int i;
    //for(i=0; i<data.length(); i++){
        if(data[0]<'0' || data[0]>'3'){
            throw invalid_argument("Argumento invalido.");
        }
        if(data[0] == '3' && data[1]>'1'){
            throw invalid_argument("Argumento invalido.");
        }
        if(data[2]!='/' || data[5]!='/'){
            throw invalid_argument("Argumento invalido.");
        }
        if(data[3]<'0' || data[3]>'1'){
            throw invalid_argument("Argumento invalido.");
        }
        if(data[3] == '1' && data[4]>'2'){
            throw invalid_argument("Argumento invalido.");
        }
    //}
}


void Data::setData(string data) throw (invalid_argument){
    validar(data);
    this->data = data;
}

void Texto::validar (string texto) throw (invalid_argument){
    if(texto.length()>LIMITE_TEXTO){
        throw invalid_argument("Argumento invalido.");
    }
}


void Texto::setTexto(string texto) throw (invalid_argument){
    validar(texto);
    this->texto = texto;
}
