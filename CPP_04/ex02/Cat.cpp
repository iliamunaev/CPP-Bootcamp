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

// derived classes must set their type field depending on their name
Cat::Cat() : AAnimal("Cat"), brain(new Brain()) {
  std::cout << "Cat Default constructor is called" << std::endl;
}

Cat::Cat(const Cat& other) : AAnimal(other), brain(new Brain(*other.brain)) {
  std::cout << "Cat Copy constructor for " << other.type << " is called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
  std::cout << "Cat Copy assignment operator for " << other.type << " is called" << std::endl;

  if (this != &other) {
    AAnimal::operator=(other);
    delete brain;
    brain = new Brain(*other.brain);
  }
  return *this;
}

Cat::~Cat() {
  delete brain;
  std::cout << "Cat Destructor for " << type << " is called" << std::endl;
}

void Cat::makeSound(void) const {
  std::cout << "OMG! I'm Cat..." << std::endl;
}

void Cat::setIdea(std::size_t i, const std::string& idea) {
  return brain->setIdea(i, idea);
}

std::string Cat::getIdea(std::size_t i) const {
  return brain->getIdea(i);
}
