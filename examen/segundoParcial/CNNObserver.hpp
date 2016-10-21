#include <iostream>
#include "Observer.hpp"

class CNNObserver : public Observer {
 public:
  virtual void update(string data);
};

void CNNObserver::update(string data) {
  std::cout << "CNN: Nueva noticia registrada ";
  std::cout << data << "\n";
}