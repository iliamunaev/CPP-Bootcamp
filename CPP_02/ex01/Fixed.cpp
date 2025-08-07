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

// Getters / Setters
int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called\n";

  return m_FixedPointNum;
}

void Fixed::setRawBits(int const raw) {
  std::cout << "setRawBits member function called\n";

  m_FixedPointNum = raw;
}

// Converters
Fixed::Fixed(const int value) {
  std::cout << "Int constructor called\n";

  int64_t tmp = static_cast<int64_t>(value) << m_FractionalBits;
  m_FixedPointNum = clampToInt32(tmp);
}

Fixed::Fixed(const float f) {
  std::cout << "Float constructor called\n";

  int64_t tmp = static_cast<int64_t>(roundf(f * (1 << m_FractionalBits)));
  m_FixedPointNum = clampToInt32(tmp);
}

// Restorers
int Fixed::toInt(void) const {
  return m_FixedPointNum >> m_FractionalBits;
}

float Fixed::toFloat(void) const {
  return static_cast<float>(m_FixedPointNum) / (1 << m_FractionalBits);
}

// Operator overloaders
std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}

// Internal Helper Function
static int clampToInt32(int64_t value) {
  if (value > INT32_MAX) {
    return INT32_MAX;
  }
  if (value < INT32_MIN) {
    return INT32_MIN;
  }
  return static_cast<int>(value);
}
