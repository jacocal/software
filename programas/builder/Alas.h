#include "Partes.h"

class Alas : public Partes {
    
    protected:
        int hipersustentador;
    
    public:
        void setMarca(std::string mc) { marca = mc; }
        void setSerie(int sr) { numSerie = sr; }
        void setHip(int hs) { hipersustentador = hs; }
    
};