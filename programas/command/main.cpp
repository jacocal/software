#include "Command.hpp"
#include "Sum.hpp"
#include "Operations.hpp"

#pragma once

int main()
{
    
    Operations<double, int> op;
    double* arrD = new double[5]{2.1,3.5,2.3,4.9,8.6};
    Command<double,int>* c = op.getOp("sum");
    cout << c->execute(arrD,5,0) << endl;
    
}