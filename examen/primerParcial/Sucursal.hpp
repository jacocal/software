#include <string>

class Sucursal {
protected:
    std::string nombre;
    std::string ingredientes[];
    int currentElement = 0;
public:
    
    virtual void agregar(std::string pastel) = 0;
    virtual Sucursal* clonar() = 0;
    Sucursal(std::string nombre) : nombre(nombre) { }
};