#include <iostream>
#include <string.h>
#include "AbstractItemFactory.h"
#include "AbstractFactory.h"
#include "Type.h"
#include "Desktop.h"
#include "Tablet.h"
#include "Laptop.h"
#include "Netbook.h"

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