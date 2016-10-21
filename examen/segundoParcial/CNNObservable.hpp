#include "Observable.hpp"
#include <string>

using namespace std;

class CNNObservable : public Observable {
 public:
  void registerNoticia(string noticia);
};

void CNNObservable::registerNoticia(string noticia) {
  notifyObservers(noticia);
}