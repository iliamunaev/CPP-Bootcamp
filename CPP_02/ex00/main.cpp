#include "Fixed.hpp"
#include <iostream>

int main(void) {
    std::cout << "\n[TEST] Default constructor:\n";
    Fixed a;

    std::cout << "\n[TEST] Copy constructor:\n";
    Fixed b(a);  // b is copy of a

    std::cout << "\n[TEST] Assignment operator:\n";
    Fixed c;
    c = b;  // c is assigned from b

    std::cout << "\n[RESULTS] Raw bits comparison:\n";
    std::cout << "a.getRawBits(): " << a.getRawBits() << "\n";
    std::cout << "b.getRawBits(): " << b.getRawBits() << "\n";
    std::cout << "c.getRawBits(): " << c.getRawBits() << "\n";

    return 0;
}
