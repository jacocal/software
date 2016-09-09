#include "Iterator.hpp"
#pragma once

template <class T>
class Iterator;

template <class T>
class Aggregate {
    
    public:
        //friend class Iterator<T>;
        Aggregate() : /*maxSize(10),*/ currentElem(10), lista(new T[size])
        {
            
        }
        void add(T* elem)
        {
            if(currentElem < maxSize){
                lista[currentElem++] = elem;
            }else{
                cout << "Tamaño maximo obtenido";
            }
        }
        Iterator<T> getIterator()
        {
            return new Iterator<T>(*this);
        }
        ~Aggregate()
        {
            delete [] lista;
        }
        T getElementAt(int pos)
        {
            return lista[pos];
        }
        int getMaxSize() { return maxSize; }
        
    protected:
        T* lista;
        int maxSize = 10;
        int currentElem;
        T* find(T* elem);
        void deleteO(T* elem);
        Iterator* getIterator() { return new Iterator; }
    
};