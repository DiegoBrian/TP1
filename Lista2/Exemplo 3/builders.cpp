#include "builders.h"

IUGerente* BuilderSubsistemaGerenteTeste::construir(){

        IUGerente   *cntrIUGerente;
        ILNGerente  *cntrLNGerente;

        // Cria as controladoras;

        cntrIUGerente = new CntrIUGerente();
        cntrLNGerente = new StubLNGerente();

        // Interliga as controladoras;

        cntrIUGerente->setCntrLNGerente(cntrLNGerente);

        // retorna referência para a controladora.

        return cntrIUGerente;
}
