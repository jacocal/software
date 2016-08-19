#include <iostream>
#include <string.h>
#include "AbstractFactory.h"

using namespace std;

class Laptop : public AbstractFactory {
    
    
    private:
        Laptop() {}
        
    public:
        string name() { return "Laptop"; }
        static Laptop* create() { return new Laptop(); }
    
};