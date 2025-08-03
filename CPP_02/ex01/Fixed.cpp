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


Fixed::Fixed(const int i) : m_RawBits(i << m_FractionalBits) {
  std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) :
  m_RawBits(static_cast<int>(roundf(f * (1 << m_FractionalBits)))) {
  std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
  std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called" << std::endl;

  return m_RawBits;
}

void Fixed::setRawBits(int const raw) {
  m_RawBits = raw;
}

int Fixed::toInt(void) const {
  return m_RawBits >> m_FractionalBits;
}

float Fixed::toFloat(void) const {
  return static_cast<float>(m_RawBits) / (1 << m_FractionalBits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}
