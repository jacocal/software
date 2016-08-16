#include <iostream>
#include "string.h"
#include "Computadora.h"

using namespace std;

int main(){

    int opcion;
    
    cout << "Seleccione equipo a construir: \n 1.Desktop \n 2.Laptop \n 3.Netbook \n 4.Tablet" << endl;
    cin >> opcion;
    /*cout << "Seleccion de componentes" << endl;
    cout << "Ensamblado de " << equipo << endl;
    cout << "Instalacion y configuracion de software" << endl;
    cout << "Empaquetando " << equipo << " en producto final" << endl;*/
    switch (opcion) {
        case 1:
            Desktop* des = new Desktop("a0291", "MacOS 'El Capitan'", "NVIDIA 980", 3);
            des->crear();
            break;
        case 2:
            Laptop* lap = new Laptop("a0291", "MacOS 'El Capitan'", "NVIDIA 980", 3);
            lap->crear();
            break;
        case 3:
            Netbook* net = new Netbook("a0291", "MacOS 'El Capitan'", "NVIDIA 980", 3);
            net->crear();
            break;
        case 4:
            Tablet* tab = new Tablet("a0291", "MacOS 'El Capitan'", "NVIDIA 980", 3);
            tab->crear();
            break;
        default:
            cout << "Error: try again";
            break;
    }
    
    return 0;
}