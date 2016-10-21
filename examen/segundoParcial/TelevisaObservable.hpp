#include "Observable.hpp"
#include <string>

using namespace std;

class TelevisaObservable : public Observable {
 public:
  void registerNoticia(string noticia);
};

void TelevisaObservable::registerNoticia(string noticia) {
  notifyObservers(noticia);
}