#include <string>
#include "AbstractComputerFactory.h"

class ComputerFactory : public AbstractComputerFactory {
 private:
  static ComputerFactory* instance;
  ComputerFactory() {}

 public:
  AbstractComputer * create(ComputerType type);
  static ComputerFactory* getInstance();
};