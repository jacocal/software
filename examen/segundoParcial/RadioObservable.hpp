#include "Observable.hpp"
#include <string>

using namespace std;

class RadioObservable : public Observable {
 public:
  void registerNoticia(string noticia);
};

void RadioObservable::registerNoticia(string noticia) {
  notifyObservers(noticia);
}