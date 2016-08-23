#include <string>
#include "AbstractComputer.h"

class Laptop : public AbstractComputer {
 private:
  Laptop() {}
 public:
  std::string describe();
  static Laptop* create();
};