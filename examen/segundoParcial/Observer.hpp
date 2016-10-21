#include <string>

using namespace std;

class Observer {
  public:
   virtual void update(string data) = 0;
};