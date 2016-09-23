#include "ArrayPositiveInts.hpp"

#pragma once;

class ArrayPositiveInts;

class Proxy {
    
    private:
        ArrayPositiveInts& arr;
        int idx;
    
    public:
        Proxy(ArrayPositiveInts& arr, int idx) : arr(arr), idx(idx){}
        Proxy& operator=(int value)
        {
            if(value >= 0){
                //arr[idx] = value;
                *(arr.values+idx) = value;
                return *this;
            }else{
                cout << "error" << endl;
                return *this;
            }
        }
        friend ostream& operator<<(ostream& op, Proxy& yo)
        {
            op << yo.arr.values+idx;
            return op;
        }
    
}