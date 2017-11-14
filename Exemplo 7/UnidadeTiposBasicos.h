//---------------------------------------------------------------------------

#ifndef UnidadeTiposBasicosH
#define UnidadeTiposBasicosH
//---------------------------------------------------------------------------

#include <string>
#include <stdexcept>

using namespace std;

//---------------------------------------------------------------------------
//Classe TipoBasico.

class TipoBasico {
       virtual void validar(string) throw (invalid_argument) = 0;  
protected:
       string valor;
public:
       TipoBasico(){}
       void setValor(const string&) throw (invalid_argument);
       string getValor() const;   
};

inline void TipoBasico::setValor(const string& valor) throw (invalid_argument) {
        validar(valor);
        this->valor = valor;
}

inline string TipoBasico::getValor() const {
       return valor;
}

//---------------------------------------------------------------------------
//Classe Matricula.

class Matricula:public TipoBasico {
private:
        void validar(string) throw (invalid_argument);
public:
        Matricula(){}
        Matricula(string) throw (invalid_argument);
};

//---------------------------------------------------------------------------
//Classe Senha.

class Senha:public TipoBasico {
private:
        void validar(string) throw (invalid_argument);
public:
        Senha () {}
        Senha(string) throw (invalid_argument);
};

//---------------------------------------------------------------------------
//Classe Nome.

class Nome:public TipoBasico {
private:
        void validar(string) throw (invalid_argument);
public:
        Nome() {}
        Nome(string) throw (invalid_argument);
};

//---------------------------------------------------------------------------
//Classe Telefone.

class Telefone:public TipoBasico {
private:
        void validar(string) throw (invalid_argument);
public:
        Telefone() {}
        Telefone(string)throw (invalid_argument);
};

//---------------------------------------------------------------------------
//Classe Código de disciplina.

class CodigoDisciplina:public TipoBasico {
private:
        void validar(string) throw (invalid_argument);
public:
        CodigoDisciplina () {}
        CodigoDisciplina(string) throw (invalid_argument);
};

#endif
