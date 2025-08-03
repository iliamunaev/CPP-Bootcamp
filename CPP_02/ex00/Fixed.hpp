#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

#define F_BITS_8 8;

class Fixed {
  public:
    Fixed();
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);

  private:
    static const int m_FractionalBits = F_BITS_8;
    int m_RawBits;
};

#endif // FIXED_HPP
