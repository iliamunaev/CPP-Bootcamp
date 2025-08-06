#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : m_type("WrongAnimal") {
  std::cout << "WrongAnimal Default constructor is started\n";
}

WrongAnimal::WrongAnimal(const std::string& type) : m_type(type) {
  std::cout << "WrongAnimal Type constructor is started\n";
}

WrongAnimal::~WrongAnimal() {
  std::cout << "WrongAnimal Destructor is started\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : m_type(other.m_type) {
  std::cout << "WrongAnimal Copy constructor is started\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
  std::cout << "WrongAnimal Copy assignment operator is started\n";
  if (this != &other) {
    this->m_type = other.m_type;
  }
  return *this;
}

void WrongAnimal::makeSound(void) const {
  std::cout << "Boo! I'm WrongAnimal!\n";
}

std::string WrongAnimal::getType(void) const {
  return m_type;
}
