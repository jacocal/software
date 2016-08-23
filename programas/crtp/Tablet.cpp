#include <string>
#include "Tablet.h"

std::string Tablet::describe() {
  return "tablet";
}

Tablet* Tablet::create() {
  return new Tablet();
}