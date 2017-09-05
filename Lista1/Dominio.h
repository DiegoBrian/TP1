class Nome {
private:
        String nome;

        const static int TAMANHO_MAXIMO = 15;

        // Método responsável por validação.

        void validarNome(String) throw (invalid_argument);

public:
        // Métodos de acesso.

        void setNome(String) throw (invalid_argument);

        String getNome() const {
            return nome;
        }
};

class Telefone {
private:
        String telefone;

        const static int TAMANHO = 14;

        // Método responsável por validação.

        void validarTelefone(String) throw (invalid_argument);

public:
        // Métodos de acesso.

        void setTelefone(String) throw (invalid_argument);

        String getTelefone() const {
            return telefone;
        }
};

class Titulo {
private:
        String titulo;

        const static int TAMANHO_MAXIMO = 20;

        // Método responsável por validação.

        void validarTitulo(String) throw (invalid_argument);

public:
        // Métodos de acesso.

        void setTitulo(String) throw (invalid_argument);

        String getTitulo() const {
            return tirulo;
        }
};

class Codigo {
private:
        String codigo;

        const static int TAMANHO = 5;

        // Método responsável por validação.

        void validarCodigo(String) throw (invalid_argument);

public:
        // Métodos de acesso.

        void setCodigo(String) throw (invalid_argument);

        String getCodigo() const {
            return codigo;
        }
};

class GeneroLiterario {
private:
        String generoLiterario;

        // Método responsável por validação.

        void validarGeneroLiterario(String) throw (invalid_argument);

public:
        // Métodos de acesso.

        void setGeneroLiterario(String) throw (invalid_argument);

        String getGeneroLiterario() const {
            return generoLiterario;
        }
};