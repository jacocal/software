#include <string>
#include "AbstractPastelFactory.hpp"

class PastelFactory : public AbstractPastelFactory {
 private:
  static PastelFactory* instance;
  PastelFactory() {}

 public:
  AbstractPastel * create(PastelType type);
  static PastelFactory* getInstance();
};