#include "Fixed.hpp"

Fixed::Fixed() : m_RawBits(0) {
  std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& other) : m_RawBits(other.m_RawBits) {
  std::cout << "Copy constructor called\n";
}

Fixed& Fixed::operator=(const Fixed& other) {
  std::cout << "Copy assignment operator called\n";

  if (this != &other) {
    this->m_RawBits = other.m_RawBits;
  }
  return *this;
}

Fixed::~Fixed() {
  std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called\n";

  return m_RawBits;
}

void Fixed::setRawBits(int const raw) {
  std::cout << "setRawBits member function called\n";

  m_RawBits = raw;
}
