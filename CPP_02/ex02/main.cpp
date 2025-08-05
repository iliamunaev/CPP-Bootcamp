#include "Fixed.hpp"
#include <iostream>

void testConstructorsAndAssignment() {
    std::cout << "\n[Constructor & Assignment Tests]" << std::endl;
    Fixed a;
    Fixed b(42);
    Fixed c(3.14f);
    Fixed d(b);         // Copy constructor
    Fixed e;
    e = c;              // Assignment operator

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "d (copy of b): " << d << std::endl;
    std::cout << "e (assigned from c): " << e << std::endl;
}

void testArithmetic() {
    std::cout << "\n[Arithmetic Tests]" << std::endl;
    Fixed a(10.5f);
    Fixed b(2.0f);

    std::cout << "a: " << a << ", b: " << b << std::endl;
    std::cout << "a + b: " << (a + b) << std::endl;
    std::cout << "a - b: " << (a - b) << std::endl;
    std::cout << "a * b: " << (a * b) << std::endl;
    std::cout << "a / b: " << (a / b) << std::endl;
}

void testIncrement() {
    std::cout << "\n[Increment / Decrement Tests]" << std::endl;

    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << "Initial a: " << a << std::endl;
    std::cout << "Pre-increment: " << ++a << std::endl;
    std::cout << "After pre-increment: " << a << std::endl;
    std::cout << "Post-increment: " << a++ << std::endl;
    std::cout << "After post-increment: " << a << std::endl;
    std::cout << "Pre-decrement: " << --a << std::endl;
    std::cout << "After pre-decrement: " << a << std::endl;
    std::cout << "Post-decrement: " << a-- << std::endl;
    std::cout << "After post-decrement: " << a << std::endl;

    std::cout << "\n[Const Mult Result]" << std::endl;
    std::cout << b << std::endl;
}

void testComparison() {
    std::cout << "\n[Comparison Tests]" << std::endl;
    Fixed x(5.5f);
    Fixed y(10.0f);

    std::cout << x << " > " << y << " = " << (x > y) << std::endl;
    std::cout << x << " < " << y << " = " << (x < y) << std::endl;
    std::cout << x << " >= " << y << " = " << (x >= y) << std::endl;
    std::cout << x << " <= " << y << " = " << (x <= y) << std::endl;
    std::cout << x << " == " << y << " = " << (x == y) << std::endl;
    std::cout << x << " != " << y << " = " << (x != y) << std::endl;
}

void testMinMax() {
    std::cout << "\n[Min/Max Tests]" << std::endl;
    Fixed const a(3.65f);
    Fixed const b(4.83838383f);
    Fixed c(12.1f);
    Fixed d(6.66f);

    std::cout << "const min: " << Fixed::min(a, b) << std::endl;
    std::cout << "const max: " << Fixed::max(a, b) << std::endl;
    std::cout << "non-const min: " << Fixed::min(c, d) << std::endl;
    std::cout << "non-const max: " << Fixed::max(c, d) << std::endl;
}

int main(void) {
    std::cout << "[Main Fixed Test Start]\n" << std::endl;

    testConstructorsAndAssignment();
    testIncrement();
    testArithmetic();
    testComparison();
    testMinMax();

    std::cout << "\n[Main Fixed Test End]\n" << std::endl;
    return 0;
}
