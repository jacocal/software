#include "Partes.h"
#include "Motor.h"
#include "Alas.h"

class Avion : public Partes {
    
    protected:
        Motor* motor;
        Alas* alas;
        
    public:
        void setAlas(Alas* al) { alas = al; }
        void setMotor(Motor* mt) { motor = mt; }
        void setMarca(std::string mc) { marca = mc; }
        void setSerie(int sr) { numSerie = sr; }
    
};