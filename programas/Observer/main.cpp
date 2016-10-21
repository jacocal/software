#include "TemperatureObservable.hpp"
#include "WindObservable.hpp"
#include "TemperatureObserver.hpp"
#include "WindObserver.hpp"

int main(int argc, char const *argv[]) {
  TemperatureObservable temperatureObservable;
  WindObservable windObservable;
  TemperatureObserver temperatureObserver;
  WindObserver windObserver;

  temperatureObservable.registerObserver(&temperatureObserver);
  temperatureObservable.registerObserver(&temperatureObserver);
  windObservable.registerObserver(&windObserver);

  temperatureObservable.registerCelsius(25);
  temperatureObservable.registerFahrenheit(88);

  windObservable.registerWindSpeed(120);
  windObservable.registerWindSpeed(35);

  temperatureObservable.registerCelsius(15);

  return 0;
}