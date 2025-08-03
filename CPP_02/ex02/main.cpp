#include "Fixed.hpp"

int main(void) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << --a << std::endl;
    std::cout << a << std::endl;
    std::cout << a-- << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;


    const Fixed c(3.65f);
    const Fixed d(4.83838383f);
    std::cout << Fixed::max(c, d) << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}
