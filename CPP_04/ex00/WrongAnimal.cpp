/*
*  WrongAnimal.cpp
*
*  By: Ilia Munaev ilyamunaev@gmail.com
*  LinkedIn: https://www.linkedin.com/in/iliamunaev/
*
*  Created: 2025-08-10
*  Updated: 2025-08-10
*/
#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
  std::cout << "WrongAnimal Default constructor is started" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& t) : type(t) {
  std::cout << "WrongAnimal Type constructor is started" << std::endl;
}

WrongAnimal::~WrongAnimal() {
  std::cout << "WrongAnimal Destructor is started" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
  std::cout << "WrongAnimal Copy constructor is started" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
  std::cout << "WrongAnimal Copy assignment operator is started" << std::endl;
  if (this != &other) {
    this->type = other.type;
  }
  return *this;
}

void WrongAnimal::makeSound(void) const {
  std::cout << "Boo! I'm WrongAnimal!" << std::endl;
}

const std::string& WrongAnimal::getType(void) const {
  return type;
}
