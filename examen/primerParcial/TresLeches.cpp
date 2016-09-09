#include "TresLeches.hpp"
#include <string>

std::string TresLeches::describe() {
  return "Batiendo \n Amasando \n Horneando \n Decorando \n Empacando";
}

TresLeches* TresLeches::create() {
  return new TresLeches();
}