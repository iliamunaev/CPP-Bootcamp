#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() {}

Fixed::Fixed(const Fixed& other) : m_RawBits(other.m_RawBits) {}

Fixed& Fixed::operator=(const Fixed& other) {
  if (this != &other) {
  this->m_RawBits = other.m_RawBits;
  }

  return *this;
}

Fixed::Fixed(const int i) : m_RawBits(i << m_FractionalBits) {}

Fixed::Fixed(const float f) :
  m_RawBits(static_cast<int>(roundf(f * (1 << m_FractionalBits)))) {}

int Fixed::getRawBits(void) const {
  return m_RawBits;
}

void Fixed::setRawBits(int const raw) {
  m_RawBits = raw;
}

int Fixed::toInt(void) const {
  return m_RawBits >> m_FractionalBits;
}

float Fixed::toFloat(void) const {
  return static_cast<double>(m_RawBits) / (1 << m_FractionalBits);
}

// Output operator
std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
  os << fixed.toFloat();
  return os;
}

// ---------- Comparision operators (>, <, >=, <=, ==, !=)---------- //
bool Fixed::operator>(const Fixed& other) const {
  return this->m_RawBits > other.m_RawBits;
}

bool Fixed::operator<(const Fixed& other) const {
  return this->m_RawBits < other.m_RawBits;
}

bool Fixed::operator>=(const Fixed& other) const {
  return this->m_RawBits >= other.m_RawBits;
}

bool Fixed::operator<=(const Fixed& other) const {
  return this->m_RawBits <= other.m_RawBits;
}

bool Fixed::operator==(const Fixed& other) const {
  return this->m_RawBits == other.m_RawBits;
}

bool Fixed::operator!=(const Fixed& other) const {
  return this->m_RawBits != other.m_RawBits;
}

// ---------- Overflow validation ---------- //
bool isOverflow(int64_t num) {
  return num > INT32_MAX || num < INT32_MIN;
}

int assignEdgeValue(int64_t num) {
  if (num > INT32_MAX) {
    return INT32_MAX;
  } else {
    return INT32_MIN;
  }
}

int setValueValidated(int64_t num) {
  if (isOverflow(num)) {
    return assignEdgeValue(num);
  } else {
    return static_cast<int>(num);
  }
}

// ---------- Arithmetic operators (+, -, *, /) ---------- //
Fixed Fixed::operator+(const Fixed& other) const {
  Fixed result;

  int64_t temp = static_cast<int64_t>(this->m_RawBits + other.m_RawBits);
  result.setRawBits(setValueValidated(temp));

  return result;
}

Fixed Fixed::operator-(const Fixed& other) const {
  Fixed result;

  int64_t temp = static_cast<int64_t>(this->m_RawBits - other.m_RawBits);
  result.setRawBits(setValueValidated(temp));

  return result;
}

Fixed Fixed::operator*(const Fixed& other) const {
  Fixed result;

  int64_t temp = (static_cast<int64_t>(this->m_RawBits) * other.m_RawBits) >> m_FractionalBits;
  result.setRawBits(setValueValidated(temp));

  return result;
}

Fixed Fixed::operator/(const Fixed& other) const {
  Fixed result;

  int64_t temp = (static_cast<int64_t>(this->m_RawBits) << m_FractionalBits) / other.m_RawBits;
  result.setRawBits(setValueValidated(temp));

  return result;
}

// ---------- Increment, decrement operators (++a, a++, --a, a--) ---------- //

// pre-increment ++a
Fixed& Fixed::operator++() {
  m_RawBits = setValueValidated(static_cast<int64_t>(this->m_RawBits + 1));

  return *this;
}

// post-increment a++
Fixed Fixed::operator++(int) {
  Fixed prevFixed = *this;
  operator++();

  return prevFixed;
}

// pre-decrement --a
Fixed& Fixed::operator--() {
  m_RawBits = setValueValidated(static_cast<int64_t>(this->m_RawBits - 1));

  return *this;
}

// post-decrement a--
Fixed Fixed::operator--(int) {
  Fixed prevFixed = *this;
  operator--();

  return prevFixed;
}

// ---------- min(), max() ---------- //
Fixed& Fixed::min(Fixed& a, Fixed& b) {
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

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
  if (a < b) {
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
