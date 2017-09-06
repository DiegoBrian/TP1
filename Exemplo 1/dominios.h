#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

// Declara��o de classe.

class Codigo {
private:
        int codigo;

        const static int LIMITE = 25;

        // M�todo respons�vel por valida��o.

        void validar(int) throw (invalid_argument);

public:
        // M�todos de acesso.

        void setCodigo(int) throw (invalid_argument);

        int getCodigo() const {
            return codigo;
        }
};

#endif // DOMINIOS_H_INCLUDED
