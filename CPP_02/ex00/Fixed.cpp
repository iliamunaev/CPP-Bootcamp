#include "Fixed.hpp"

Fixed::Fixed() {
  std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const Fixed& other) : m_RawBits(other.m_RawBits) {
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {

  if (this != &other) {
    this->m_RawBits = other.m_RawBits;
  }
  std::cout << "Copy assignment operator called" << std::endl;
  return *this;
}

Fixed::~Fixed() {
  std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called" << std::endl;

  return m_RawBits;
}

void Fixed::setRawBits(int const raw) {
  // std::cout << "Copy assignment operator called" << std::endl;

  m_RawBits = raw;
}


