#include <iostream>
#include "string.h"

using namespace std;

class Computadora {
  
  public:
    string modelo;
    string sisOp;
    string tarGraf;
    int tipPaquete;
    
    Computadora() {}
    Computadora (string modelo, string sisOP, string tarGraf, int paquete) { this->modelo = modelo; this->sisOp = sisOp; this->tarGraf = tarGraf, this-> tipPaquete = tipPaquete; }
    void crear();
    
};

void Computadora::crear() {
    cout << "Componentes: " << this->tarGraf << endl;
    cout << "Los componentes se estan ensamblando" << endl;
    cout << "Software y sistema operativo: " << this->sisOp << ", el modelo es: " << this->modelo << endl;
    cout << "Empaquetando en tipo de paquete: " << this->tipPaquete << endl;
}

class Desktop : public Computadora {
    
    public:
        Desktop() {}
        Desktop (string modelo, string sisOP, string tarGraf, int paquete) { this->modelo = modelo; this->sisOp = sisOp; this->tarGraf = tarGraf, this-> tipPaquete = tipPaquete; }
        
};

class Laptop : public Computadora {
    
    public:
        Laptop() {}
        Laptop (string modelo, string sisOP, string tarGraf, int paquete) { this->modelo = modelo; this->sisOp = sisOp; this->tarGraf = tarGraf, this-> tipPaquete = tipPaquete; }
        
};

class Netbook : public Computadora {
    
    public:
        Netbook() {}
        Netbook (string modelo, string sisOP, string tarGraf, int paquete) { this->modelo = modelo; this->sisOp = sisOp; this->tarGraf = tarGraf, this-> tipPaquete = tipPaquete; }
        
};

class Tablet : public Computadora {
    
    public:
        Tablet() {}
        Tablet (string modelo, string sisOP, string tarGraf, int paquete) { this->modelo = modelo; this->sisOp = sisOp; this->tarGraf = tarGraf, this-> tipPaquete = tipPaquete; }
        
};