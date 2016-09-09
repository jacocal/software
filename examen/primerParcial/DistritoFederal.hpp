#include "Clon.hpp"
#include "Sucursal.hpp"

class DistritoFederal : public Clon<Sucursal, DistritoFederal>
{
public:
    std::string ingredientes[3] = ["Chocolate", "Fruta", "Merengue"];
  
};