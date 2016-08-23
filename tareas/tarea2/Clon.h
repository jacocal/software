#include <iostream>
using namespace std;

template <class Base, class SubClase>
class Clon : public Base
{
public:
    using Base::Base;
    
    virtual Base* clonar()
    {
        return new SubClase(dynamic_cast<SubClase&>(*this));    
    }
};