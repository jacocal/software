#include <iostream>
#include "ArregloEnterosPositivos.hpp"

int main(int argc, char const *argv[]) {
  ArregloEnterosPositivos arreglo(10);
  std::cout << "Antes: " << arreglo[0] << std::endl;
  arreglo[0] = 1;
  std::cout << "Despues: " << arreglo[0] << std::endl;
  arreglo[0] = -3;
  std::cout << "Asginacion negativa: " << arreglo[0] << std::endl;
  return 0;
}