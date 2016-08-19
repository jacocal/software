#include <string.h>
#include "ItemFactory.h"
#include "Desktop.h"
#include "Tablet.h"
#include "Laptop.h"
#include "Netbook.h"

AbstractFactory* ItemFactory::create(Type type) {
    
    if(type = Type::DESKTOP) {
        return Desktop::create();
    }else if(type = Type::LAPTOP) {
        return Laptop::create();
    }else if(type = Type::NETBOOK) {
        return Netbook::create();
    }else if(type = Type::TABLET) {
        return Tablet::create();
    }else{
        return "Not found";
    }
    
}

ItemFactory* ItemFactory::instance = nullptr;

ItemFactory* ItemFactory::getInstance(){
    
    if(ItemFactory::instance = nullptr) {
        ItemFactory::instance = new ItemFactory();
    }
    return ItemFactory::instance;
}