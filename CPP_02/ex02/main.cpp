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

/*
void testConstructorsAndAssignment() {
  std::cout << "\n[Constructor & Assignment Tests]\n";
  Fixed a;
  Fixed b(42);
  Fixed c(3.14f);
  Fixed d(b);
  Fixed e;
  e = c;

  std::cout << "a: " << a << "\n";
  std::cout << "b: " << b << "\n";
  std::cout << "c: " << c << "\n";
  std::cout << "d (copy of b): " << d << "\n";
  std::cout << "e (assigned from c): " << e << "\n";
}

void testArithmetic() {
  std::cout << "\n[Arithmetic Tests]\n";
  Fixed a(10.5f);
  Fixed b(2.0f);

  std::cout << "a: " << a << ", b: " << b << "\n";
  std::cout << "a + b: " << (a + b) << "\n";
  std::cout << "a - b: " << (a - b) << "\n";
  std::cout << "a * b: " << (a * b) << "\n";
  std::cout << "a / b: " << (a / b) << "\n";
}

void testIncrement() {
  std::cout << "\n[Increment / Decrement Tests]\n";

  Fixed a;
  Fixed const b(Fixed(5.05f) * Fixed(2));

  std::cout << "Initial a: " << a << "\n";
  std::cout << "Pre-increment: " << ++a << "\n";
  std::cout << "After pre-increment: " << a << "\n";
  std::cout << "Post-increment: " << a++ << "\n";
  std::cout << "After post-increment: " << a << "\n";
  std::cout << "Pre-decrement: " << --a << "\n";
  std::cout << "After pre-decrement: " << a << "\n";
  std::cout << "Post-decrement: " << a-- << "\n";
  std::cout << "After post-decrement: " << a << "\n";

  std::cout << "\n[Const Mult Result]\n";
  std::cout << b << "\n";
}

void testComparison() {
  std::cout << "\n[Comparison Tests]\n";
  Fixed x(5.5f);
  Fixed y(10.0f);

  std::cout << x << " > " << y << " = " << (x > y) << "\n";
  std::cout << x << " < " << y << " = " << (x < y) << "\n";
  std::cout << x << " >= " << y << " = " << (x >= y) << "\n";
  std::cout << x << " <= " << y << " = " << (x <= y) << "\n";
  std::cout << x << " == " << y << " = " << (x == y) << "\n";
  std::cout << x << " != " << y << " = " << (x != y) << "\n";
}

void testMinMax() {
  std::cout << "\n[Min/Max Tests]\n";
  Fixed const a(3.65f);
  Fixed const b(4.83838383f);
  Fixed c(12.1f);
  Fixed d(6.66f);

  std::cout << "const min: " << Fixed::min(a, b) << "\n";
  std::cout << "const max: " << Fixed::max(a, b) << "\n";
  std::cout << "non-const min: " << Fixed::min(c, d) << "\n";
  std::cout << "non-const max: " << Fixed::max(c, d) << "\n";
}

int main(void) {
  std::cout << "[Main Fixed Test Start]\n\n";

  testConstructorsAndAssignment();
  testIncrement();
  testArithmetic();
  testComparison();
  testMinMax();

  std::cout << "\n[Main Fixed Test End]\n\n";
  return 0;
}
*/

// Assignment test

int main( void ) {
  Fixed a;
  Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
  std::cout << a << std::endl;
  std::cout << ++a << std::endl;
  std::cout << a << std::endl;
  std::cout << a++ << std::endl;
  std::cout << a << std::endl;
  std::cout << b << std::endl;
  std::cout << Fixed::max( a, b ) << std::endl;
  return 0;
}

