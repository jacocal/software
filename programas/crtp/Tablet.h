#include <string>
#include "AbstractComputer.h"
class Tablet : public AbstractComputer {
 private:
  Tablet() {}
 public:
  std::string describe();
  static Tablet* create();
};