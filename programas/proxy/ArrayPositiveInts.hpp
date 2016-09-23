#include <iostream>
#include "Proxy.hpp"

#pragma once;

using namespace std;

class ArrayPositiveInts {
    
    private:
        int* values;
        int size;
        
    public:
        friend class Proxy;
        ArrayPositiveInts()
        {
            size = 100;
            values = new int[size];
        }
        Proxy operator[](int idx)
        {
            return Proxy(*this, int idx);
        }
      
};