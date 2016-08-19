#include <iostream>
#include <string.h>
#include "AbstractFactory.h"

using namespace std;

class Desktop : public AbstractFactory {
    
    
    private:
        Desktop() {}
        
    public:
        string name() { return "Desktop"; }
        static Desktop* create() { return new Desktop(); }
    
};