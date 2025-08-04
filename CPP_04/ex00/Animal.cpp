#include "Animal.hpp"
#include <iostream>

Animal::Animal() : m_type("Default Animal") {
  std::cout << "Animal Default constructor is started" << std::endl;
}

Animal::Animal(const std::string& type) : m_type(type) {
  std::cout << "Animal Type constructor is started" << std::endl;
}

Animal::~Animal() {
  std::cout << "Animal Destructor is started" << std::endl;
}

Animal::Animal(const Animal& other) : m_type(other.m_type) {
  std::cout << "Animal Copy constructor is started" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
  std::cout << "Animal Copy assignment operator is started" << std::endl;
  if (this != &other) {
    this->m_type = other.m_type;
  }
  return *this;
}

void Animal::makeSound(void) const {
  std::cout << "Boo! I'm Animal!" << std::endl;
}

std::string Animal::getType(void) const {
  return m_type;
}
