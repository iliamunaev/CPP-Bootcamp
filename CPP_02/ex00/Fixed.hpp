/*
*  Fixed.hpp
*
*  By: Ilia Munaev ilyamunaev@gmail.com
*  LinkedIn: https://www.linkedin.com/in/iliamunaev/
*
*  Created: 2025-08-07
*  Updated: 2025-08-07
*/

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
