#include <iostream>
#include <stdexcept>

class MiEntero {
public:
  MiEntero() {
    num = 0;
  }

  MiEntero(int num);

  friend std::ostream& operator<<(std::ostream& os, const MiEntero& entero);

  MiEntero& operator=(const int& valor) {
    if (valor >= 0) {
      this->num = valor;
    } else {
      std::cout << "No se puede asignar un valor negativo" << std::endl;
    }
    return *this;
  }

private:
  unsigned int num;
};


std::ostream& operator<<(std::ostream& os, const MiEntero& entero) {
  os << entero.num;
  return os;
}

MiEntero::MiEntero(int num) {
  if (num < 0) {
    throw new std::runtime_error("No se puede crear un mientero negativo");
  } else {
    num = 0;
  }
}