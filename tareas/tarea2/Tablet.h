#include <iostream>
#include <string.h>
#include "AbstractFactory.h"

using namespace std;

class Tablet : public Clon<AbstractFactory, Tablet> {
    
    
    private:
        Tablet() {}
        
    public:
        string name() { return "Desktop"; }
        static Tablet* create() { return new Tablet(); }
    
};