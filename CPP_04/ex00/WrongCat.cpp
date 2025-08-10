/*
*  WrongCat.cpp
*
*  By: Ilia Munaev ilyamunaev@gmail.com
*  LinkedIn: https://www.linkedin.com/in/iliamunaev/
*
*  Created: 2025-08-10
*  Updated: 2025-08-10
*/
#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
  std::cout << "WrongCat Default constructor is started" << std::endl;
}

WrongCat::~WrongCat() {
  std::cout << "WrongCat Destructor is started" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
  std::cout << "WrongCat Copy constructor is started" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
  std::cout << "WrongCat Copy assignment operator is started" << std::endl;

  if (this != &other) {
    WrongAnimal::operator=(other);
  }
  return *this;
}

void WrongCat::makeSound(void) const {
  std::cout << "Meow! I'm WrongCat!" << std::endl;
}

std::string WrongCat::getType(void) const {
  return WrongAnimal::getType();
}
