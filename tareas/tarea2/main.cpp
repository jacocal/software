#include <iostream>
#include <string.h>
#include "ItemFactory.h"

using namespace std;

#pragma once
int main() {
    
    int option;
    ItemFactory* item = ItemFactory::getInstance();
    cout << "Seleccione equipo a construir: \n 1.Desktop \n 2.Laptop \n 3.Netbook \n 4.Tablet" << endl;
    cin >> option;
    switch (option) {
        case 1:
            AbstractFactory * i = item->create(Type::DESKTOP);
            break;
        case 2:
            AbstractFactory * i = item->create(Type::LAPTOP);
            break;
        case 3:
            AbstractFactory * i = item->create(Type::NETBOOK);
            break;
        case 4:
            AbstractFactory * i = item->create(Type::TABLET);
            break;
        default:
            cout << "Error 404: item not found on factory";
            break;
    }
    cout << i->name();
    return 0;
    
}