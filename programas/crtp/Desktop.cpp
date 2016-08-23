#include "Desktop.h"
#include <string>

std::string Desktop::describe() {
  return "desktop";
}

Desktop* Desktop::create() {
  return new Desktop();
}