#include <string>

using namespace std;

class Persona {
    
    public:
        string nombre;
        int identificador;
        string noticia;
        
        Persona(){};
    
        Persona(string nombre, int identificador) {
            this->nombre = nombre;
            this->identificador = identificador;
        }
        
        void publicar(string noticia)
        {
            this->noticia = noticia;
        }
        
        int getIdentifier(){ return identificador; }
        
        string getNoticia(int identificador){ return noticia; }
        
        ~Persona(){}
    
};