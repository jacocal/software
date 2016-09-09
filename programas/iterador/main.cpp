#include "Aggregate.hpp"
#include "Iterator.hpp"
#include "Persona.hpp"
#include <iostream>
#pragma once

int main() {
    
    Persona p1(20);
    Persona p2(30);
    Aggregate<Persona> lista;
    lista.add(p1);
    lista.add(p2);
    
    for (Iterator<Persona>* i = lista.getIterator(); i->isNull(); ){
        std::cout << i->next().getEdad();
    }
    
    return 0;
    
}