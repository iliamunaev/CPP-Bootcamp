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

// derived classes must set their type field depending on their name
Dog::Dog() : Animal("Dog"), brain(new Brain()) {
  std::cout << "Dog Default constructor is called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other), brain(new Brain(*other.brain)) {
  std::cout << "Dog Copy constructor for " << other.type << " is called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
  std::cout << "Dog Copy assignment operator for " << other.type << " is called" << std::endl;

  if (this != &other) {
    Animal::operator=(other);
    delete brain;
    brain = new Brain(*other.brain);
  }
  return *this;
}

Dog::~Dog() {
  delete brain;
  std::cout << "Dog Destructor for " << type << " is called" << std::endl;
}

void Dog::makeSound(void) const {
  std::cout << "Yahoooo! I'm Dog!" << std::endl;
}

void Dog::setIdea(std::size_t i, const std::string& idea) {
  return brain->setIdea(i, idea);
}

std::string Dog::getIdea(std::size_t i) const {
  return brain->getIdea(i);
}

