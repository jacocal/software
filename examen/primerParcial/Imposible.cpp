#include "Imposible.hpp"
#include <string>

std::string Imposible::describe() {
  return "Batiendo \n Amasando \n Horneando \n Decorando \n Empacando";
}

Imposible* Imposible::create() {
  return new Imposible();
}