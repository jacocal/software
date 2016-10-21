#include "Observable.hpp"
#include <string>

using namespace std;

class TVAObservable : public Observable {
 public:
  void registerNoticia(string noticia);
};

void TVAObservable::registerNoticia(string noticia) {
  notifyObservers(noticia);
}