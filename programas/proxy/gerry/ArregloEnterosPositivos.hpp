#include "MiEntero.hpp"

class ArregloEnterosPositivos {
 public:
  explicit ArregloEnterosPositivos(int size);

  MiEntero& operator[] (int pos) {
    return array[pos];
  }

 private:
  int size;
  MiEntero* array;
};

ArregloEnterosPositivos::ArregloEnterosPositivos(int size) {
  this->size = size;
  array = new MiEntero[size];
}