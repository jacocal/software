#include <iostream>
#include "Observer.hpp"

class WindObserver : public Observer {
 public:
  virtual void update(int data);
};

void WindObserver::update(int data) {
  std::cout << "Nueva velocidad de viento registrada con valor de ";
  std::cout << data << "km/h\n";
}