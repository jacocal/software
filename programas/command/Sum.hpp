#include "Command.hpp"
#include "Operations.hpp"

template<class T, class Func>
class Sum : public Command<T, Func> {
    
    T execute(T* arr,int size, Func f)
    {
        T acum = 0;
        for (int i=0; i<size; i++)
        {
            acum += arr[i];
        }
        return acum;
    }
    
};