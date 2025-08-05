#ifndef FIXED_01_HPP
#define FIXED_01_HPP

#include <iostream>
#include <cmath>

class Fixed {
  public:
    Fixed();
    Fixed(const int i);
    Fixed(const float f);
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);
    int toInt(void) const;
    float toFloat(void) const;

  private:
    static constexpr int m_FractionalBits = 8;
    int m_RawBits;
};

// Stream output overload
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif // FIXED_01_HPP
