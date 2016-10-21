#include <iostream>
#include "Observer.hpp"

class RadioObserver : public Observer {
 public:
  virtual void update(string data);
};

void RadioObserver::update(string data) {
  std::cout << "Radio Formula: Nueva noticia registrada ";
  std::cout << data << "\n";
}