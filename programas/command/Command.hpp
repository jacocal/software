#include <map>
#include <string>
#include <iostream>

template<class T, class Func>
class Command {
    
  virtual T execute(T*, int, Func) = 0;
    
};