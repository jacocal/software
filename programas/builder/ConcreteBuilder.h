#include "Builder.h"

class ConcreteBuilder : public Builder {
    
    void buildAlas() {
        
        Alas* alas = new Alas();
        alas->setMarca("Boeing");
        avion->setAlas(alas);
        
    }
    
    void buildMotor() {
        
        Motor* motor = new Motor();
        motor->setPotencia(3500);
        avion->setMotor(motor);
        
    }
    
    void buildMarca {
        
        avion->setMarca("Boeing");
        
    }
    
    void buildSerie {
        
        avion->setSerie(261);   
        
    }
    
};