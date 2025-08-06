#include "Animal.hpp"

Animal::Animal() : m_type("Default Animal") {
  std::cout << "Animal Default constructor is started\n";
}

Animal::Animal(const std::string& type) : m_type(type) {
  std::cout << "Animal Type constructor is started\n";
}

Animal::~Animal() {
  std::cout << "Animal Destructor is started\n";
}

Animal::Animal(const Animal& other) : m_type(other.m_type) {
  std::cout << "Animal Copy constructor is started\n";
}

Animal& Animal::operator=(const Animal& other) {
  std::cout << "Animal Copy assignment operator is started\n";
  if (this != &other) {
    this->m_type = other.m_type;
  }
  return *this;
}

void Animal::makeSound(void) const {
  std::cout << "Boo! I'm Animal!\n";
}

std::string Animal::getType(void) const {
  return m_type;
}
