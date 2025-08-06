#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
  std::cout << "WrongCat Default constructor is started\n";
}

WrongCat::~WrongCat() {
  std::cout << "WrongCat Destructor is started\n";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
  std::cout << "WrongCat Copy constructor is started\n";
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
  std::cout << "WrongCat Copy assignment operator is started\n";

  if (this != &other) {
    WrongAnimal::operator=(other);
  }
  return *this;
}

void WrongCat::makeSound(void) const {
  std::cout << "Meow! I'm WrongCat!\n";
}

std::string WrongCat::getType(void) const {
  return WrongAnimal::getType();
}
