#include <iostream>
#include "Observer.hpp"

class TemperatureObserver : public Observer {
 public:
  virtual void update(int data);
};

void TemperatureObserver::update(int data) {
  std::cout << "Nueva temperatura registrada con valor de ";
  std::cout << data << "ºC\n";
}