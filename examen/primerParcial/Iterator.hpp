#include "Aggregate.hpp"
#pragma once

template <class T>
class Iterator {
    
    //friend class Aggregate;
    
    protected:
        int indx;
        Iterator(){}
        Aggregate<T>* lista;
    
    public:
        Iterator(const Aggregate<T>& lista) : indx(0) 
        {
            this->lista = lista;
            
        }
        T first();
        T next() 
        {
            if(isNull()){
                return lista->getElementAt(indx++);
                //return lista->lista[indx++];
            }else{
                //return *(new T);
                return NULL;
            }
        }
        T last();
        bool isNull()
        {
            return idx < lista->getMaxSize();
        }
        T* currentItem();
    
};