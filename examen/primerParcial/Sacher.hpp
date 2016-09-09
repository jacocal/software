#include <string>
#include "AbstractPastel.hpp"

class Sacher : public AbstractPastel {
 private:
  Sacher() {}
 public:
  std::string describe();
  static Sacher* create();
};