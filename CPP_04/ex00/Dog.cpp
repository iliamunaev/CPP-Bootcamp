#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
  std::cout << "Dog Default constructor is started\n";
}

Dog::~Dog() {
  std::cout << "Dog Destructor is started\n";
}

Dog::Dog(const Dog& other) : Animal(other) {
  std::cout << "Dog Copy constructor is started\n";
}

Dog& Dog::operator=(const Dog& other) {
  std::cout << "Dog Copy assignment operator is started\n";

  if (this != &other) {
    Animal::operator=(other);
  }
  return *this;
}

void Dog::makeSound(void) const {
  std::cout << "Woof! I'm Dog!\n";
}

std::string Dog::getType(void) const {
  return type;
}
