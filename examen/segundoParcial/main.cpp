#include <iostream>
#include <string>
#include "Persona.hpp"
#include "CNNObservable.hpp"
#include "MVSObservable.hpp"
#include "RadioObservable.hpp"
#include "TelevisaObservable.hpp"
#include "TVAObservable.hpp"
#include "CNNObserver.hpp"
#include "MVSObserver.hpp"
#include "RadioObserver.hpp"
#include "TelevisaObserver.hpp"
#include "TVAObserver.hpp"

using namespace std;

Persona* menu(int opcion, Persona* candidato);

int main() {
    
    int opcion;
    
    Persona* candidato = new Persona("",0);
    
    char continute = 'c';
    
    while(continute == 'c'){
        cout << "Quien eres?" << "\n" << "1. Peña Nieto" << "\n" << "2. Hilarie" << "\n" << "3. Trump" << "4. Anyone else" << endl;
        cin >> opcion;
        
        candidato = menu(opcion, candidato);
        
        cout << "Para continuar presiona: c" << "\nCualquier otra cosa para salir" << endl;
        cin >> continute;
    }
    
    CNNObservable cnnObservable;
    CNNObserver cnnObserver;
    MVSObserver mvsObserver;
    MVSObservable mvsObservable;
    RadioObserver radioObserver;
    RadioObservable radioObservable;
    TelevisaObserver telivsaObserver;
    TelevisaObservable televisaObservable;
    TVAObserver tvaObserver;
    TVAObservable tvaObservable;
    
    if(candidato->getIdentifier() == 1)
    {
        cnnObservable.registerObserver(&cnnObserver);
        cnnObservable.registerNoticias(candidato->getNoticia());
        mvsObservable.registerObserver(&mvsObserver);
        mvsObservable.registerNoticias(candidato->getNoticia());
        radioObservable.registerObserver(&radioObserver);
        radioObservable.registerNoticias(candidato->getNoticia());
        televisaObservable.registerObserver(&televisaObserver);
        televisaObservable.registerNoticias(candidato->getNoticia());
        tvaObservable.registerObserver(&cnnObserver);
        tvaObservable.registerNoticias(candidato->getNoticia());
    }else if(candidato->getIdentifier() == 2 | candidato->getIdentifier() == 3){
        mvsObservable.registerObserver(&mvsObserver);
        mvsObservable.registerNoticias(candidato->getNoticia());
        radioObservable.registerObserver(&radioObserver);
        radioObservable.registerNoticias(candidato->getNoticia());
        televisaObservable.registerObserver(&televisaObserver);
        televisaObservable.registerNoticias(candidato->getNoticia());
        tvaObservable.registerObserver(&cnnObserver);
        tvaObservable.registerNoticias(candidato->getNoticia());
    }else{
        
    }
    
    return 0;
    
}

Persona* menu(int opcion, Persona* candidato) {
    string nombre;
    string noticia;
    switch(opcion) {
        case 1:
            candidato = new Persona("Peña Nieto", 1);
            break;
        case 2:
            candidato = new Persona("Hilarie", 2);
            break;
        case 3:
            candidato = new Persona("Trump", 3);
            break;
        case 4:
            cout << "Cual es tu nombre?" << endl;
            cin >> nombre;
            candidato = new Persona(nombre, 4);
        default:
            cout << "No existe" << endl;
            break;
    }
    cout << "Que te gustaria publicar: " << endl;
    cin >> noticia;
    candidato->publicar(noticia);
    return candidato;
}