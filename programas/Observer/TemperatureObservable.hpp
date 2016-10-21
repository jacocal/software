#include "Observable.hpp"

class TemperatureObservable : public Observable {
 public:
  void registerCelsius(int celsius);
  void registerFahrenheit(int fahrenheit);
};

void TemperatureObservable::registerCelsius(int celsius) {
  notifyObservers(celsius);
}

void TemperatureObservable::registerFahrenheit(int fahrenheit) {
  notifyObservers((fahrenheit - 32) / 1.8);
}
