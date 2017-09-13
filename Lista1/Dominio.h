#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string.h>

using namespace std;
/**
     *  @class Nome
     *  Delimitação da classe referente ao campo do nome do usuário.
     */
class Nome {
private:
        string nome;

        const static int TAMANHO_MAXIMO = 15;

        /** Método responsável por validação.*/

        void validarNome(string) throw (invalid_argument);

public:
        /** Métodos de acesso.*/

        void setNome(string) throw (invalid_argument);

        string getNome() const {
            return nome;
        }
};

/**
     *  @class Telefone
     *  Delimitação da classe referente ao campo do telefone do usuário.
     */

class Telefone {
private:
        string telefone;

        const static int TAMANHO = 14;

        /** Método responsável por validação.*/

        void validarTelefone(string) throw (invalid_argument);

public:
        /** Métodos de acesso.*/

        void setTelefone(string) throw (invalid_argument);

        string getTelefone() const {
            return telefone;
        }
};

/**
     *  @class Título
     *  Delimitação da classe referente ao campo do título do livro.
     */

class Titulo {
private:
        string titulo;

        const static int TAMANHO_MAXIMO = 20;

        /** Método responsável por validação.*/

        void validarTitulo(string) throw (invalid_argument);

public:
        /** Métodos de acesso.*/

        void setTitulo(string) throw (invalid_argument);

        string getTitulo() const {
            return titulo;
        }
};

/**
     *  @class Codigo
     *  Delimitação da classe referente ao campo do código do livro.
     */

class Codigo {
private:
        string codigo;

        const static int TAMANHO = 5;

        /** Método responsável por validação.*/

        void validarCodigo(string) throw (invalid_argument);

public:
        /** Métodos de acesso.*/

        void setCodigo(string) throw (invalid_argument);

        string getCodigo() const {
            return codigo;
        }
};

/**
     *  @class GeneroLiterario
     *  Delimitação da classe referente ao campo do gênero literário do livro.
     */

class GeneroLiterario {
private:
        string generoLiterario;

        /** Método responsável por validação.*/

        void validarGeneroLiterario(string) throw (invalid_argument);

public:
        /** Métodos de acesso.*/

        void setGeneroLiterario(string) throw (invalid_argument);

        string getGeneroLiterario() const {
            return generoLiterario;
        }

};

/**
     *  @class Apelido
     *  Delimitação da classe referente ao campo do apelido do usuário.
     */

class Apelido{

private:

    std::string apelido;

    const static int LIMITE_APELIDO = 5;

     /** Método responsável por validação.*/

    void validar(string) throw (invalid_argument);

public:

    /** Métodos de acesso.*/

    void setApelido(string) throw (invalid_argument);

    string getApelido() const {
        return apelido;
    }
};

/**
     *  @class Senha
     *  Delimitação da classe referente ao campo da senha do usuário.
     */

class Senha{

    private:

    std::string senha;

    const static int LIMITE_SENHA = 4;

     /** Método responsável por validação.*/

    void validar(string) throw (invalid_argument);


public:

    /** Métodos de acesso.*/

    void setSenha(string) throw (invalid_argument);

    string getSenha() const {
        return senha;
    }

};

/**
     *  @class Data
     *  Delimitação da classe referente ao campo da data de publicação do livro.
     */

class Data{
private:
    std::string data;

     /** Método responsável por validação.*/

    void validar(string)throw(invalid_argument);

public:

    /** Métodos de acesso.*/

    void setData(string) throw (invalid_argument);

    string getData() const{
        return data;
    }
};

/**
     *  @class Texto
     *  Delimitação da classe referente ao campo do texto da resenha do livro.
     */

class Texto{
private:
    std::string texto;
    const static int LIMITE_TEXTO = 40;

    /** Método responsável por validação.*/

    void validar (string)throw (invalid_argument);

public:

    /** Métodos de acesso.*/

    void setTexto(string) throw(invalid_argument);

    string getTexto() const{
        return texto;
    }
};

#endif // DOMINIOS_H_INCLUDED
