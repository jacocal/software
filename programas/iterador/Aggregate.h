#include "Iterator.h"

template <class T>
class Aggregate {
    
    friend class Iterator;
    
    public:
        T* lista[];
        int maxSize;
        int currentElem;
        
    protected:
        void add(T* elem);
        T* find(T* elem);
        void deleteO(T* elem);
        Iterator* getIterator() { return new Iterator; }
    
};