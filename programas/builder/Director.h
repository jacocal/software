#include "Builder.h"

class Director {
    
    private:
        Builder* builder;
    
    public:
        void setBuilder(Builder* bd) { builder = bd; }
        Avion* getAvion() { return builder->getAvion(); }
        void construct() {
            
            builder->createAvion();
            builder->buildMotor();
            builder->buildAlas();
            builder->buildMarca();
            builder->buildSerie();
            
        }
        
};