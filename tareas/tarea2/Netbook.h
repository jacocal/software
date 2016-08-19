#include <iostream>
#include <string.h>
#include "AbstractFactory.h"

using namespace std;

class Netbook : public AbstractFactory {
    
    
    private:
        Netbook() {}
        
    public:
        string name() { return "Netbook"; }
        static Netbook* create() { return new Netbook(); }
    
};