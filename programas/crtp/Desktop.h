#include <string>
#include "AbstractComputer.h"

class Desktop : public AbstractComputer {
 private:
  Desktop() {}
 public:
  std::string describe();
  static Desktop * create();
};