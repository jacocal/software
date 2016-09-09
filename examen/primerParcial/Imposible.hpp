#include <string>
#include "AbstractPastel.hpp"

class Imposible : public AbstractPastel {
 private:
  Imposible() {}
 public:
  std::string describe();
  static Imposible* create();
};