#include <iostream>
#include "Observer.hpp"

class TVAObserver : public Observer {
 public:
  virtual void update(string data);
};

void TVAObserver::update(string data) {
  std::cout << "TV Azteca: Nueva noticia registrada ";
  std::cout << data << "\n";
}