/*
*  Animal.cpp
*
*  By: Ilia Munaev ilyamunaev@gmail.com
*  LinkedIn: https://www.linkedin.com/in/iliamunaev/
*
*  Created: 2025-08-10
*  Updated: 2025-08-10
*/
#include <iostream>
#include "Animal.hpp"

Animal::Animal() : type("Default_Animal") {
  std::cout << "Animal Default constructor is called" << std::endl;
}

Animal::Animal(const std::string& t) : type(t) {
  std::cout << "Animal Type constructor for " << t << " is called" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
  std::cout << "Animal Copy constructor for " << other.type << " is called" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
  std::cout << "Animal Copy assignment operator for " << type << " is called" << std::endl;
  if (this != &other) {
    this->type = other.type;
  }

  return *this;
}

Animal::~Animal() {
  std::cout << "Animal Destructor for " << type << " is called" << std::endl;
}

void Animal::makeSound(void) const {
  std::cout << "Boo! I'm Animal!" << std::endl;
}

std::string Animal::getType(void) const {
  return type;
}
