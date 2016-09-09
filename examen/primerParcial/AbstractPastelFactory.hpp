#include <string>
#include "AbstractPastel.hpp"
#include "PastelType.hpp"

class AbstractComputerFactory {
 public:
  virtual AbstractComputer* create(ComputerType type) = 0;
};