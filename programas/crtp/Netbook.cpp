#include <string>
#include "Netbook.h"

std::string Netbook::describe() {
  return "netbook";
}

Netbook* Netbook::create() {
  return new Netbook();
}