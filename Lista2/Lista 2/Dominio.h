#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string.h>

using namespace std;
/**
     *  @class Nome
     *  Delimitação da classe referente ao campo do nome do usuario.
     */
class Nome {
private:
        string nome;

        const static int TAMANHO_MAXIMO = 15;

        /** Metodo responsável por validacao.*/

        void validarNome(string) throw (invalid_argument);

public:
        const static string NOME_INVALIDO;

        /** Mtodo de acesso.*/

        void setNome(string) throw (invalid_argument);

        /** Metodo de acesso.*/

        string getNome() const {
            return nome;
        }
};

/**
     *  @class Telefone
     *  Delimitação da classe referente ao campo do telefone do usuario.
     */

class Telefone {
private:
        string telefone;

        const static int TAMANHO = 14;

        /** Metodo responsável por validacao.*/

        void validarTelefone(string) throw (invalid_argument);

public:
        const static string TELEFONE_INVALIDO;

        /** Metodo de acesso.*/

        void setTelefone(string) throw (invalid_argument);

        /** Metodo de acesso.*/

        string getTelefone() const {
            return telefone;
        }
};

/**
     *  @class Titulo
     *  Delimitação da classe referente ao campo do título do livro.
     */

class Titulo {
private:
        string titulo;

        const static int TAMANHO_MAXIMO = 20;

        /** Metodo responsável por validacao.*/

        void validarTitulo(string) throw (invalid_argument);

public:
        /** Metodo de acesso.*/

        void setTitulo(string) throw (invalid_argument);

        /** Metodo de acesso.*/

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

        /** Metodo responsável por validacao.*/

        void validarCodigo(string) throw (invalid_argument);

public:
        /** Metodo de acesso.*/

        void setCodigo(string) throw (invalid_argument);

        /** Metodo de acesso.*/

        string getCodigo() const {
            return codigo;
        }
};

/**
     *  @class GeneroLiterario
     *  Delimitação da classe referente ao campo do gênero literario do livro.
     */

class GeneroLiterario {
private:
        string generoLiterario;

        /** Metodo responsável por validacao.*/

        void validarGeneroLiterario(string) throw (invalid_argument);

public:
        /** Metodo de acesso.*/

        void setGeneroLiterario(string) throw (invalid_argument);

        /** Metodo de acesso.*/

        string getGeneroLiterario() const {
            return generoLiterario;
        }

};

/**
     *  @class Apelido
     *  Delimitação da classe referente ao campo do apelido do usuario.
     */

class Apelido{

private:

    string apelido;

    const static int LIMITE_APELIDO = 5;

     /** Metodo responsável por validacao.*/

    void validar(string) throw (invalid_argument);

public:

    const static string APELIDO_INVALIDO;

    /** Metodo de acesso.*/

    void setApelido(string) throw (invalid_argument);
    /** Metodo de acesso.*/

    string getApelido() const {
        return apelido;
    }
};

/**
     *  @class Senha
     *  Delimitação da classe referente ao campo da senha do usuario.
     */

class Senha{

    private:

    std::string senha;

    const static int LIMITE_SENHA = 4;

     /** Metodo responsável por validacao.*/

    void validar(string) throw (invalid_argument);


public:

    /** Metodo de acesso.*/

    void setSenha(string) throw (invalid_argument);
    const static string SENHA_INVALIDA;
    /** Metodo de acesso.*/

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

     /** Metodo responsável por validacao.*/

    void validar(string)throw(invalid_argument);

public:

    /** Metodo de acesso.*/

    void setData(string) throw (invalid_argument);

    /** Metodo de acesso.*/

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

    /** Metodo responsável por validacao.*/

    void validar (string)throw (invalid_argument);

public:

    /** Metodo de acesso.*/

    void setTexto(string) throw(invalid_argument);

    /** Metodo de acesso.*/

    string getTexto() const{
        return texto;
    }
};

#endif // DOMINIOS_H_INCLUDED

