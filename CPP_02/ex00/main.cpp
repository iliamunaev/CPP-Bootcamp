/*
*  main.cpp
*
*  By: Ilia Munaev ilyamunaev@gmail.com
*  LinkedIn: https://www.linkedin.com/in/iliamunaev/
*
*  Created: 2025-08-07
*  Updated: 2025-08-07
*/

#include "Fixed.hpp"

int main(void) {
  Fixed a;
  Fixed b(a);
  Fixed c;

  c = b;

  std::cout << "a.getRawBits(): " << a.getRawBits() << std::endl;
  std::cout << "b.getRawBits(): " << b.getRawBits() << std::endl;
  std::cout << "c.getRawBits(): " << c.getRawBits() << std::endl;

  return 0;
}
