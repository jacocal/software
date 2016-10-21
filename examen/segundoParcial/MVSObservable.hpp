#include "Observable.hpp"
#include <string>

using namespace std;

class MVSObservable : public Observable {
 public:
  void registerNoticia(string noticia);
};

void MVSObservable::registerNoticia(string noticia) {
  notifyObservers(noticia);
}