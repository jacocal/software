#include "Partes.h"

class Motor : public Partes {
    
    protected:
        int potencia;
    
    public:
        void setMarca(std::string mc) { marca = mc; }
        void setSerie(int sr) { numSerie = sr; }
        void setPotencia(int pt) { potencia = pt; }
};