#include "Sacher.hpp"
#include <string>

std::string Sacher::describe() {
  return "Batiendo \n Amasando \n Horneando \n Decorando \n Empacando";
}

Sacher* Sacher::create() {
  return new Imposible();
}