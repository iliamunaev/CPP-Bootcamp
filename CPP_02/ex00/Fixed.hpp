#ifndef FIXED_00_HPP
#define FIXED_00_HPP

#include <iostream>

class Fixed {
  public:
    Fixed();
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);

  private:
    static const int m_FractionalBits = 8;
    int m_RawBits;
};

#endif // FIXED_00_HPP
