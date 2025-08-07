#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
  public:
    Fixed();
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    ~Fixed();

    // Getters
    int getRawBits(void) const;

    // Setters
    void setRawBits(int const raw);

  private:
    static const int m_FractionalBits = 8;
    int m_FixedPointNum;
};

#endif // FIXED_HPP
