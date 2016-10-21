#include "Observable.hpp"
class WindObservable : public Observable {
 public:
  void registerWindSpeed(int windSpeed);
};

void WindObservable::registerWindSpeed(int windSpeed) {
  notifyObservers(windSpeed);
}