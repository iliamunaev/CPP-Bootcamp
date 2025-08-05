#include "Fixed.hpp"
#include <iostream>

int main(void) {
    Fixed a;
    Fixed const b(10);          // from int
    Fixed const c(42.42f);      // from float
    Fixed const d(b);           // copy constructor

    a = Fixed(1234.4321f);      // assignment from float temporary

    std::cout << "\n[VALUES - toFloat() via overloaded << operator]\n";
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;

    std::cout << "\n[VALUES - toInt() conversion]\n";
    std::cout << "a = " << a.toInt() << " (as int)" << std::endl;
    std::cout << "b = " << b.toInt() << " (as int)" << std::endl;
    std::cout << "c = " << c.toInt() << " (as int)" << std::endl;
    std::cout << "d = " << d.toInt() << " (as int)" << std::endl;

    return 0;
}
