#include <string>
#include "AbstractComputer.h"

class Netbook : public AbstractComputer {
 private:
  Netbook() {}
 public:
  std::string describe();
  static Netbook* create();
};