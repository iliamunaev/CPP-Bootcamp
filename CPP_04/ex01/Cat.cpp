#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), brain(new Brain()) {
  std::cout << "Cat Default constructor is started" << std::endl;
}

Cat::~Cat() {
  delete brain;
  std::cout << "Cat Destructor is started" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other), brain(new Brain(*other.brain)) {
  std::cout << "Cat Copy constructor is started" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
  std::cout << "Cat Copy assignment operator is started" << std::endl;

  if (this != &other) {
    Animal::operator=(other);
    delete brain;
    brain = new Brain(*other.brain);
  }
  return *this;
}

void Cat::makeSound(void) const {
  std::cout << "Meow! I'm Cat!" << std::endl;
}

std::string Cat::getType(void) const {
  return Animal::getType();
}
