#include <string>

class Sucursal {
protected:
    std::string nombre;
    std::string ingredientes[];
public:
    
    virtual Sucursal* clonar() = 0;
    Sucursal(std::string nombre) : nombre(nombre) { }
};