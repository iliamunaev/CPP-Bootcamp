/*
*  main.cpp
*
*  By: Ilia Munaev ilyamunaev@gmail.com
*  LinkedIn: https://www.linkedin.com/in/iliamunaev/
*
*  Created: 2025-08-10
*  Updated: 2025-08-10
*/
#include "ScavTrap.hpp"

void testScavTrapBasic() {
    ScavTrap s("Baby");

    std::cout << "\n[TEST] s attacks Ghost" << std::endl;
    s.attack("Ghost");

    std::cout << "\n[TEST] s takes 40 damage" << std::endl;
    s.takeDamage(40);

    std::cout << "\n[TEST] s repairs 20 HP" << std::endl;
    s.beRepaired(20);

    std::cout << "\n[TEST] s enters Gate Keeper Mode" << std::endl;
    s.guardGate();

    std::cout << "\n[TEST] Drain s's energy points" << std::endl;
    for (int i = 0; i < 50; ++i)
        s.attack("Zombie");

    std::cout << "\n[TEST] s tries to repair with 0 EP" << std::endl;
    s.beRepaired(10);

    std::cout << "\n[TEST] s takes 0 damage" << std::endl;
    s.takeDamage(0);

    std::cout << "\n[TEST] s repairs 0 HP" << std::endl;
    s.beRepaired(0);

    std::cout << "\n[TEST] s takes fatal damage (999)" << std::endl;
    s.takeDamage(999);

    std::cout << "\n[TEST] s tries to attack after death" << std::endl;
    s.attack("Undead");

    std::cout << "\n[TEST] s tries to repair after death" << std::endl;
    s.beRepaired(5);

    std::cout << "\n[TEST] s tries guardGate after death" << std::endl;
    s.guardGate();
}

void testScavTrapCopy() {
    std::cout << "\n[TEST] Copy constructor ScavTrap b(a)" << std::endl;
    ScavTrap a("R2-D2");
    ScavTrap b(a);

    std::cout << "\n[TEST] Copy assignment ScavTrap c = a" << std::endl;
    ScavTrap c;
    c = a;
}

int main() {
    testScavTrapCopy();
    testScavTrapBasic();
    return 0;
}
