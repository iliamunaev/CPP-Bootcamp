/*
*  Brain.cpp
*
*  By: Ilia Munaev ilyamunaev@gmail.com
*  LinkedIn: https://www.linkedin.com/in/iliamunaev/
*
*  Created: 2025-08-10
*  Updated: 2025-08-10
*/
#include "Brain.hpp"

Brain::Brain() {
  std::cout << "Brain Default constructor is called" << std::endl;
}

Brain::Brain(const Brain& other) : ideas( other.ideas) {
  std::cout << "Brain Copy constructor is called" << std::endl;
}

Brain& Brain::operator=(const Brain& other) {
  if (this != &other) {
    for (std::size_t i = 0; i < MaxIdeas; ++i) {
      this->ideas[i] = other.ideas[i];
    }
  }
  return *this;
}

Brain::~Brain() {
  std::cout << "Brain Destructor is called" << std::endl;
}

const std::string& Brain::getIdea(std::size_t i) const {
  if (i >= MaxIdeas){
    throw std::out_of_range("idea index");
  }
  return ideas[i];
}

void Brain::setIdea(std::size_t i, const std::string& idea) {
  if (i >= MaxIdeas) {
    throw std::out_of_range("idea index");
  }
  ideas[i] = idea;
}
