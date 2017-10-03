#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

// Declaração de classe Matricula.

class Matricula {

private:

    int valor;
    void validar(int) throw (invalid_argument);

public:

    const static int LIMITE = 12345;

    void setValor(int) throw (invalid_argument);

    int getValor() const {
        return valor;
    }
};


#endif // DOMINIOS_H_INCLUDED
