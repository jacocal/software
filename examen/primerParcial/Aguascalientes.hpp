#include "Clon.hpp"
#include "Sucursal.hpp"

class Aguascalientes : public Clon<Sucursal, Aguascalientes>
{
public:
    std::string ingredientes[3] = ["Leche", "Huevo", "Mantequilla"];
  
};