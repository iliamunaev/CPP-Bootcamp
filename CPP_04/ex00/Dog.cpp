/*
*  Dog.cpp
*
*  By: Ilia Munaev ilyamunaev@gmail.com
*  LinkedIn: https://www.linkedin.com/in/iliamunaev/
*
*  Created: 2025-08-10
*  Updated: 2025-08-10
*/
#include <iostream>
#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
  std::cout << "Dog Default constructor is started" << std::endl;
}

Dog::~Dog() {
  std::cout << "Dog Destructor is started" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
  std::cout << "Dog Copy constructor is started" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
  std::cout << "Dog Copy assignment operator is started" << std::endl;

  if (this != &other) {
    Animal::operator=(other);
  }
  return *this;
}

void Dog::makeSound(void) const {
  std::cout << "Woof! I'm Dog!" << std::endl;
}

std::string Dog::getType(void) const {
  return type;
}
