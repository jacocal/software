#include <string>
#include "PastelFactory.hpp"
#include "Sacher.hpp"
#include "TresLeches.hpp"
#include "Imposible.hpp"

AbstractPastel * PastelFactory::create(PastelType type) {
  if (type == ComputerType::SACHER) {
    return Sacher::create();
  } else if (type == ComputerType::TRESLECHES) {
    return TresLeches::create();
  } else if (type == ComputerType::IMPOSIBLE) {
    return Imposible::create();
  }
  throw std::runtime_error("Hay un pastel que no está implementado");
}

PastelFactory* PastelFactory::instance = nullptr;

PastelFactory* PastelFactory::getInstance() {
  if (PastelFactory::instance == nullptr) {
    PastelFactory::instance = new PastelFactory();
  }
  return PastelFactory::instance;
}