#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string.h>

using namespace std;

class Nome {
private:
        string nome;

        const static int TAMANHO_MAXIMO = 15;

        // Método responsável por validação.

        void validarNome(string) throw (invalid_argument);

public:
        // Métodos de acesso.

        void setNome(string) throw (invalid_argument);

        string getNome() const {
            return nome;
        }
};

class Telefone {
private:
        string telefone;

        const static int TAMANHO = 14;

        // Método responsável por validação.

        void validarTelefone(string) throw (invalid_argument);

public:
        // Métodos de acesso.

        void setTelefone(string) throw (invalid_argument);

        string getTelefone() const {
            return telefone;
        }
};

class Titulo {
private:
        string titulo;

        const static int TAMANHO_MAXIMO = 20;

        // Método responsável por validação.

        void validarTitulo(string) throw (invalid_argument);

public:
        // Métodos de acesso.

        void setTitulo(string) throw (invalid_argument);

        string getTitulo() const {
            return titulo;
        }
};

class Codigo {
private:
        string codigo;

        const static int TAMANHO = 5;

        // Método responsável por validação.

        void validarCodigo(string) throw (invalid_argument);

public:
        // Métodos de acesso.

        void setCodigo(string) throw (invalid_argument);

        string getCodigo() const {
            return codigo;
        }
};

class GeneroLiterario {
private:
        string generoLiterario;

        // Método responsável por validação.

        void validarGeneroLiterario(string) throw (invalid_argument);

public:
        // Métodos de acesso.

        void setGeneroLiterario(string) throw (invalid_argument);

        string getGeneroLiterario() const {
            return generoLiterario;
        }

};

class Apelido{

private:

    std::string apelido;

    const static int LIMITE_APELIDO = 5;
    void validar(string) throw (invalid_argument);

public:

    void setApelido(string) throw (invalid_argument);

    string getApelido() const {
        return apelido;
    }
};

class Senha{

    private:

    std::string senha;

    const static int LIMITE_SENHA = 4;
    void validar(string) throw (invalid_argument);


public:


    void setSenha(string) throw (invalid_argument);

    string getSenha() const {
        return senha;
    }

};

class Data{
private:
    std::string data;
    //const static int LIMITE_DIA1 = 3; //Constante que limita o algarismo das dezenas da parcela da string referente ao DIA.
    //const static int LIMITE_DIA2 =
    void validar(string)throw(invalid_argument);

public:
    void setData(string) throw (invalid_argument);
    string setData() const{
        return data;
    }
};

class Texto{
private:
    std::string texto;
    const static int LIMITE_TEXTO = 40;
    void validar (string)throw (invalid_argument);

public:
    void setTexto(string) throw(invalid_argument);
    string setTexto() const{
        return texto;
    }
};

#endif // DOMINIOS_H_INCLUDED
