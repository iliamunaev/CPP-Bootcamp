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

// Constructors / Destructor
Fixed::Fixed() : m_FixedPointNum(0) {
  std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& other) : m_FixedPointNum(other.m_FixedPointNum) {
  std::cout << "Copy constructor called\n";
}

Fixed& Fixed::operator=(const Fixed& other) {
  std::cout << "Copy assignment operator called\n";
  if (this != &other)
    m_FixedPointNum = other.m_FixedPointNum;
  return *this;
}

Fixed::~Fixed() {
  std::cout << "Destructor called\n";
}

Fixed::Fixed(const int i) {
  std::cout << "Int constructor called\n";
  int64_t tmp = static_cast<int64_t>(i) << m_FractionalBits;
  m_FixedPointNum = clampToInt32(tmp);
}

Fixed::Fixed(const float f) {
  std::cout << "Float constructor called\n";
  int64_t tmp = static_cast<int64_t>(roundf(f * (1 << m_FractionalBits)));
  m_FixedPointNum = clampToInt32(tmp);
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
int Fixed::toInt(void) const {
  return m_FixedPointNum >> m_FractionalBits;
}

float Fixed::toFloat(void) const {
  return static_cast<float>(m_FixedPointNum) / (1 << m_FractionalBits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
  os << fixed.toFloat();
  return os;
}

// Comparison Operators
bool Fixed::operator>(const Fixed& other) const {
  return this->m_FixedPointNum > other.m_FixedPointNum;
}

bool Fixed::operator<(const Fixed& other) const {
  return this->m_FixedPointNum < other.m_FixedPointNum;
}

bool Fixed::operator>=(const Fixed& other) const {
  return this->m_FixedPointNum >= other.m_FixedPointNum;
}

bool Fixed::operator<=(const Fixed& other) const {
  return this->m_FixedPointNum <= other.m_FixedPointNum;
}

bool Fixed::operator==(const Fixed& other) const {
  return this->m_FixedPointNum == other.m_FixedPointNum;
}

bool Fixed::operator!=(const Fixed& other) const {
  return this->m_FixedPointNum != other.m_FixedPointNum;
}

// Arithmetic Operators
Fixed Fixed::operator+(const Fixed& other) const {
  Fixed result;

  int64_t temp = static_cast<int64_t>(this->m_FixedPointNum) + other.m_FixedPointNum;
  result.setRawBits(clampToInt32(temp));

  return result;
}

Fixed Fixed::operator-(const Fixed& other) const {
  Fixed result;

  int64_t temp = static_cast<int64_t>(this->m_FixedPointNum) - other.m_FixedPointNum;
  result.setRawBits(clampToInt32(temp));

  return result;
}

Fixed Fixed::operator*(const Fixed& other) const {
  Fixed result;

  int64_t temp = (static_cast<int64_t>(this->m_FixedPointNum) * other.m_FixedPointNum) >> m_FractionalBits;
  result.setRawBits(clampToInt32(temp));

  return result;
}

Fixed Fixed::operator/(const Fixed& other) const {
  Fixed result;

  int64_t temp = (static_cast<int64_t>(this->m_FixedPointNum) << m_FractionalBits) / other.m_FixedPointNum;
  result.setRawBits(clampToInt32(temp));

  return result;
}

// Increment / Decrement
Fixed& Fixed::operator++() {
  m_FixedPointNum = clampToInt32(static_cast<int64_t>(m_FixedPointNum) + 1);

  return *this;
}

Fixed Fixed::operator++(int) {
  Fixed prev = *this;
  ++(*this);

  return prev;
}

Fixed& Fixed::operator--() {
  m_FixedPointNum = clampToInt32(static_cast<int64_t>(m_FixedPointNum) - 1);

  return *this;
}

Fixed Fixed::operator--(int) {
  Fixed prev = *this;
  --(*this);

  return prev;
}

// min() / max()
Fixed& Fixed::min(Fixed& a, Fixed& b) {
  if (a < b) {
    return a;
  } else {
    return b;
  }
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
  if (a < b) {
    return a;
  } else {
    return b;
  }
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}
