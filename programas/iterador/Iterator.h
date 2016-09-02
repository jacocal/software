#include "Aggregate.h"

template <class T>
class Iterator {
    
    //friend class Aggregate;
    
    protected:
        int indx;
    
    public:
        Iterator() : indx(0) {}
        virtual T* first() = 0;
        virtual T* next() = 0;
        virtual bool isNull() = 0;
        virtual T* currentItem() = 0;
    
};