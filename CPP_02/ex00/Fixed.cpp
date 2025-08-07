/*
*  Fixed.cpp
*
*  By: Ilia Munaev ilyamunaev@gmail.com
*  LinkedIn: https://www.linkedin.com/in/iliamunaev/
*
*  Created: 2025-08-07
*  Updated: 2025-08-07
*/

#include "Fixed.hpp"

// Constructors / Destructor
Fixed::Fixed() : m_FixedPointNum(0) {
  std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& other) : m_FixedPointNum(other.m_FixedPointNum) {
  std::cout << "Copy constructor called\n";
}

Fixed& Fixed::operator=(const Fixed& other) {
  std::cout << "Copy assignment operator called\n";

  if (this != &other) {
    m_FixedPointNum = other.m_FixedPointNum;
  }
  return *this;
}

Fixed::~Fixed() {
  std::cout << "Destructor called\n";
}

// Getters
int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called\n";

  return m_FixedPointNum;
}

// Setters
void Fixed::setRawBits(int const raw) {
  std::cout << "setRawBits member function called\n";

  m_FixedPointNum = raw;
}
