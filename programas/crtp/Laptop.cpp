#include "Laptop.h"
#include <string>

std::string Laptop::describe() {
  return "laptop";
}

Laptop* Laptop::create() {
  return new Laptop();
}