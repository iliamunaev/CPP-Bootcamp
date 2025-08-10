/*
*  Cat.cpp
*
*  By: Ilia Munaev ilyamunaev@gmail.com
*  LinkedIn: https://www.linkedin.com/in/iliamunaev/
*
*  Created: 2025-08-10
*  Updated: 2025-08-10
*/
#include <iostream>
#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
  std::cout << "Cat Default constructor is started" << std::endl;
}

Cat::~Cat() {
  std::cout << "Cat Destructor is started" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
  std::cout << "Cat Copy constructor is started" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
  std::cout << "Cat Copy assignment operator is started" << std::endl;

  if (this != &other) {
    Animal::operator=(other);
  }
  return *this;
}

void Cat::makeSound(void) const {
  std::cout << "Meow! I'm Cat!" << std::endl;
}

std::string Cat::getType(void) const {
  return Animal::getType();
}
