#include <string>
#include "AbstractComputer.h"
#include "ComputerType.h"

class AbstractComputerFactory {
 public:
  virtual AbstractComputer* create(ComputerType type) = 0;
};