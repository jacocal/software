//Clase ejemplo  para clones
/* los otros ejemplos funcionan cuando todas las clases tienen:
   * Constructores por default
   * Constructores con el mismo signature
   * Constructores que no llaman el constructor de sus antecesores
   
La forma de corregir lo anterior es utilizar las caracteristicas de "constructor inheritance". Esto es como sigue:
*/


#include <iostream>
using namespace std;

class Personaje
{
protected:
    string nombre;
public:
    
    virtual void correr() = 0;
    virtual Personaje* clonar() = 0;
    Personaje(string nombre) : nombre(nombre) { }
};

template <class Base, class SubClase>
class Clon : public Base
{
public:
    using Base::Base;
    
    virtual Base* clonar()
    {
        return new SubClase(dynamic_cast<SubClase&>(*this));    
    }
};

class Principe : public Clon<Personaje, Principe>
{   
public:
    void seleccionarArma();
    void atacar();
    void correr()
    {
        cout << "El principe corre rápido" << endl;
    }
	
};

class Princesa : public Clon<Personaje, Princesa>
{
public:
    void gritar();
    void correr()
    {
        cout << "La princesa corre medio lento" << endl;
    }
};

class Villano : public Clon<Personaje, Villano>
{
public:
    void atacar();
    void atraparPricnesa();
    void correr()
    {
        cout << "El villano no necesita correr" << endl;
    }
};

class VillanoVolador : public Clon<Villano, VillanoVolador>
{
public:
    void correr()
    {
        cout << "También puede volar" << endl;
    }
};

int main()
{
    VillanoVolador vv;
    Villano v;
    Princesa p;
    Principe pri;
    
    Personaje* pe = vv.clonar();
    pe->correr();
    
    return 1;
}