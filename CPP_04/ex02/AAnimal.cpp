/*
*  AAnimal.cpp
*
*  By: Ilia Munaev ilyamunaev@gmail.com
*  LinkedIn: https://www.linkedin.com/in/iliamunaev/
*
*  Created: 2025-08-10
*  Updated: 2025-08-10
*/
#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal() : type("Unknown") {
  std::cout << "AAnimal Default constructor is started" << std::endl;
}

AAnimal::AAnimal(const std::string& t) : type(t) {
  std::cout << "AAnimal Type constructor is started" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) : type(other.type) {
  std::cout << "AAnimal Copy constructor is started" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other) {
  std::cout << "AAnimal Copy assignment operator is started" << std::endl;
  if (this != &other) {
    type = other.type;
  }
  return *this;
}

AAnimal::~AAnimal() {
  std::cout << "AAnimal Destructor is started" << std::endl;
}

std::string AAnimal::getType(void) const {
  return type;
}
