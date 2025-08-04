#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), brain(new Brain()) {
  std::cout << "Dog Default constructor is started" << std::endl;
}

Dog::~Dog() {
  delete brain;
  std::cout << "Dog Destructor is started" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other), brain(new Brain(*other.brain)) {
  std::cout << "Dog Copy constructor is started" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
  std::cout << "Dog Copy assignment operator is started" << std::endl;

  if (this != &other) {
    Animal::operator=(other);
    delete brain;
    brain = new Brain(*other.brain);
  }
  return *this;
}

void Dog::makeSound(void) const {
  std::cout << "Woof! I'm Dog!" << std::endl;
}

std::string Dog::getType(void) const {
  return m_type;
}
