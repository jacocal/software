#include "Alas.h"
#include "Avion.h"
#include "Motor.h"

class Builder {
    
    protected:
        Avion* avion;
        
    public:
        Avion* getAvion() { return avion; }
        void createAvion () { avion = new Avion; }
        virtual void buildAlas() = 0;
        virtual void buildMotor() = 0;
        virtual void buildSerie() = 0;
        virtual void buildMarca() = 0;
        
};