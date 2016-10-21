#include <iostream>
#include "Observer.hpp"

class MVSObserver : public Observer {
 public:
  virtual void update(string data);
};

void MVSObserver::update(string data) {
  std::cout << "MVS: Nueva noticia registrada ";
  std::cout << data << "\n";
}