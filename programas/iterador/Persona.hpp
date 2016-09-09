#include "Aggregate.hpp"
#include "Iterator.hpp"
#pragma once

class Persona {
    
    private:
        int edad;
        
    public:
    Persona(){}
    Persona(int edad) : edad(edad){}
    int getEdad() { return edad; }
    ~Persona(){}
    
};