#include "Animal.hpp"

Animal::Animal() : type("Default Animal") {
  std::cout << "Animal Default constructor is started\n";
}

Animal::Animal(const std::string& t) : type(t) {
  std::cout << "Animal Type constructor is started\n";
}

Animal::~Animal() {
  std::cout << "Animal Destructor is started\n";
}

Animal::Animal(const Animal& other) : type(other.type) {
  std::cout << "Animal Copy constructor is started\n";
}

Animal& Animal::operator=(const Animal& other) {
  std::cout << "Animal Copy assignment operator is started\n";
  if (this != &other) {
    this->type = other.type;
  }
  return *this;
}

void Animal::makeSound(void) const {
  std::cout << "Boo! I'm Animal!\n";
}

std::string Animal::getType(void) const {
  return type;
}
