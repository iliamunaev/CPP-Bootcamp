#include "Fixed.hpp"
#include <iostream>

int main(void) {
  std::cout << "\n[TEST] Default constructor:" << std::endl;
  Fixed a;

  std::cout << "\n[TEST] Copy constructor:" << std::endl;
  Fixed b(a);

  std::cout << "\n[TEST] Assignment operator:" << std::endl;
  Fixed c;
  c = b;

  std::cout << "\n[RESULTS] Raw bits comparison:" << std::endl;
  std::cout << "a.getRawBits(): " << a.getRawBits() << std::endl;
  std::cout << "b.getRawBits(): " << b.getRawBits() << std::endl;
  std::cout << "c.getRawBits(): " << c.getRawBits() << std::endl;

  return 0;
}
