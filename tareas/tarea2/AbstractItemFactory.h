#include <iostream>
#include <string.h>
#include "AbstractFactory.h"
#include "Type.h"

using namespace std;

class AbstractItemFactory {
    
    virtual AbstractFactory* create(Type type) = 0;
    
};