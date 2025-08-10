/*
*  Animal.cpp
*
*  By: Ilia Munaev ilyamunaev@gmail.com
*  LinkedIn: https://www.linkedin.com/in/iliamunaev/
*
*  Created: 2025-08-10
*  Updated: 2025-08-10
*/
#include "Animal.hpp"

Animal::Animal() : type("Default Animal") {
  std::cout << "Animal Default constructor is started" << std::endl;
}

Animal::Animal(const std::string& t) : type(t) {
  std::cout << "Animal Type constructor is started" << std::endl;
}

Animal::~Animal() {
  std::cout << "Animal Destructor is started" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
  std::cout << "Animal Copy constructor is started" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
  std::cout << "Animal Copy assignment operator is started" << std::endl;
  if (this != &other) {
    this->type = other.type;
  }
  return *this;
}

void Animal::makeSound(void) const {
  std::cout << "Boo! I'm Animal!" << std::endl;
}

std::string Animal::getType(void) const {
  return type;
}
