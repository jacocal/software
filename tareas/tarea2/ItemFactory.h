#include <iostream>
#include <string.h>
#include "AbstractItemFactory.h"
#include "AbstractFactory.h"

using namespace std;

#pragma once
class ItemFactory {
    
    private:
        static ItemFactory* instance;
        ItemFactory() {}
        
    public:
        AbstractFactory* create(Type type);
        static ItemFactory* getInstance();
    
};