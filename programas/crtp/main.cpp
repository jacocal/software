#include <iostream>
#include "ComputerFactory.h"
#include "Laptop.h"
#include "Netbook.h"
#include "Tablet.h"
#include "Desktop.h"
#include "ComputerType.h"

int main(int argc, char const *argv[]) {
  ComputerFactory* factory = ComputerFactory::getInstance();
  AbstractComputer * l = factory->create(ComputerType::LAPTOP);
  AbstractComputer * d = factory->create(ComputerType::DESKTOP);
  AbstractComputer * n = factory->create(ComputerType::NETBOOK);
  AbstractComputer * t = factory->create(ComputerType::TABLET);
  std::cout << l->describe() << std::endl;
  std::cout << d->describe() << std::endl;
  std::cout << n->describe() << std::endl;
  std::cout << t->describe() << std::endl;
  return 0;
}