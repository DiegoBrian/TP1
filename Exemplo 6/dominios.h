#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

// Declaração da classe Matricula.

class Matricula {

private:

    int valor;
    void validar(int) throw (invalid_argument);

public:

    const static int MATRICULA_INVALIDA = 12345;

    void setValor(int) throw (invalid_argument);

    int getValor() const {
        return valor;
    }
};

// Declaração da classe Senha.

class Senha {

private:

    int valor;
    void validar(int) throw (invalid_argument);

public:

    const static int SENHA_INVALIDA = 12345;

    void setValor(int) throw (invalid_argument);

    int getValor() const {
        return valor;
    }
};

#endif // DOMINIOS_H_INCLUDED
