#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
  std::cout << "Cat Default constructor is started\n";
}

Cat::~Cat() {
  std::cout << "Cat Destructor is started\n";
}

Cat::Cat(const Cat& other) : Animal(other) {
  std::cout << "Cat Copy constructor is started\n";
}

Cat& Cat::operator=(const Cat& other) {
  std::cout << "Cat Copy assignment operator is started\n";

  if (this != &other) {
    Animal::operator=(other);
  }
  return *this;
}

void Cat::makeSound(void) const {
  std::cout << "Meow! I'm Cat!\n";
}

std::string Cat::getType(void) const {
  return Animal::getType();
}
