#include <iostream>
#include <string.h>
#include "AbstractFactory.h"

using namespace std;

class Laptop : public Clon<AbstractFactory, Laptop> {
    
    
    private:
        Laptop() {}
        
    public:
        string name() { return "Laptop"; }
        static Laptop* create() { return new Laptop(); }
    
};