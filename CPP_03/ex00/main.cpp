/*
*  main.cpp
*
*  By: Ilia Munaev ilyamunaev@gmail.com
*  LinkedIn: https://www.linkedin.com/in/iliamunaev/
*
*  Created: 2025-08-10
*  Updated: 2025-08-10
*/
#include "ClapTrap.hpp"

void testClapTrapBasic() {
    std::cout << "\n[TEST] Constructing ClapTrap a(\"Tom\")" << std:: endl;
    ClapTrap a("Tom");

    std::cout << "\n[TEST] Tom attacks \"Jerry\"" << std:: endl;
    a.attack("Jerry");

    std::cout << "\n[TEST] Tom takes 5 damage" << std:: endl;
    a.takeDamage(5);

    std::cout << "\n[TEST] Tom repairs 3 HP" << std:: endl;
    a.beRepaired(3);

    std::cout << "\n[TEST] Drain Tom's energy points" << std:: endl;
    for (int i = 0; i < 20; ++i)
        a.attack("Neigbour");

    std::cout << "\n[TEST] Tom tries to repair with 0 EP" << std:: endl;
    a.beRepaired(1);

    std::cout << "\n[TEST] Tom takes 0 damage" << std:: endl;
    a.takeDamage(0);

    std::cout << "\n[TEST] Tom repairs 0 HP" << std:: endl;
    a.beRepaired(0);

    std::cout << "\n[TEST] Tom takes fatal damage (999)" << std:: endl;
    a.takeDamage(999);

    std::cout << "\n[TEST] Tom tries to attack after death" << std:: endl;
    a.attack("Ghost");

    std::cout << "\n[TEST] Tom tries to repair after death" << std:: endl;
    a.beRepaired(10);
}

void testClapTrapCopy() {
    std::cout << "\n[TEST] Copy constructor ClapTrap b(a)" << std:: endl;
    ClapTrap a("R2-D2");
    ClapTrap b(a);

    std::cout << "\n[TEST] Copy assignment ClapTrap c = a" << std:: endl;
    ClapTrap c;
    c = a;
}

int main() {
    testClapTrapBasic();
    testClapTrapCopy();
    return 0;
}
