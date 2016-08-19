#include <iostream>
#include <string.h>
#include "AbstractItemFactory.h"

using namespace std;

class ItemFactory {
    
    private:
        static ItemFactory* instance;
        ItemFactory() {}
        
    public:
        AbstractFactory* create(Type type);
        static ItemFactory* getInstance();
    
};