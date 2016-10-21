#include <list>
#include "Observer.hpp"
#include <string>

using namespace std;

class Observable {
 private:
  std::list<Observer*> observers;
 public:
  void registerObserver(Observer* observer);
 protected:
  void removeObserver(Observer* observer);
  void notifyObservers(string data);
};

void Observable::registerObserver(Observer* observer) {
  observers.push_back(observer);
}

void Observable::removeObserver(Observer* observer) {
  observers.remove(observer);
}

void Observable::notifyObservers(string data) {
  for (Observer* observer : observers) {
    observer->update(data);
  }
}