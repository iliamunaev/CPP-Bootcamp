#include "Fixed.hpp"
#include <iostream>

int main(void) {
    Fixed a;
    Fixed const b(10);          // from int
    Fixed const c(42.42f);      // from float
    Fixed const d(b);           // copy constructor

    a = Fixed(1234.4321f);      // assignment from float temporary

    std::cout << "\n[VALUES - toFloat() via overloaded << operator]\n";
    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
    std::cout << "c = " << c << "\n";
    std::cout << "d = " << d << "\n";

    std::cout << "\n[VALUES - toInt() conversion]\n";
    std::cout << "a = " << a.toInt() << " (as int)\n";
    std::cout << "b = " << b.toInt() << " (as int)\n";
    std::cout << "c = " << c.toInt() << " (as int)\n";
    std::cout << "d = " << d.toInt() << " (as int)\n";

    return 0;
}
