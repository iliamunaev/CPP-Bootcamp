#ifndef FIXED_02_HPP
#define FIXED_02_HPP

#include <iostream>
#include <cmath>

class Fixed {
  public:
    Fixed();
    Fixed(const int i);
    Fixed(const float f);
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    ~Fixed() = default;

    int getRawBits(void) const;
    void setRawBits(int const raw);
    int toInt(void) const;
    float toFloat(void) const;

    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;

    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;

    Fixed& operator++();
    Fixed& operator--();
    Fixed operator++(int);
    Fixed operator--(int);

  private:
    static const int m_FractionalBits = 8;
    int m_RawBits;
};

// Overload operations
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

// The 6 comparison operators: >, <, >=, <=, == and !=.



#endif // FIXED_02_HPP
