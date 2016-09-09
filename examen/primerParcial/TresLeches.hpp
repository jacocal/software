#include <string>
#include "AbstractPastel.hpp"

class TresLeches : public AbstractPastel {
 private:
  TresLeches() {}
 public:
  std::string describe();
  static TresLeches* create();
};