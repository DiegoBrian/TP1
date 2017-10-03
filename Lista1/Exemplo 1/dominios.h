#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

// Declaração de classe.

class Codigo {
private:
        int codigo;

        const static int LIMITE = 25;

        // Método responsável por validação.

        void validar(int) throw (invalid_argument);

public:
        // Métodos de acesso.

        void setCodigo(int) throw (invalid_argument);

        int getCodigo() const {
            return codigo;
        }
};

#endif // DOMINIOS_H_INCLUDED
