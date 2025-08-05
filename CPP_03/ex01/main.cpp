#include "ScavTrap.hpp"
#include <iostream>

void testScavTrapBasic() {
    ScavTrap s("Baby");

    std::cout << "\n[TEST] s attacks Ghost\n";
    s.attack("Ghost");

    std::cout << "\n[TEST] s takes 40 damage\n";
    s.takeDamage(40);

    std::cout << "\n[TEST] s repairs 20 HP\n";
    s.beRepaired(20);

    std::cout << "\n[TEST] s enters Gate Keeper Mode\n";
    s.guardGate();

    std::cout << "\n[TEST] Drain s's energy points\n";
    for (int i = 0; i < 50; ++i)
        s.attack("Zombie");

    std::cout << "\n[TEST] s tries to repair with 0 EP\n";
    s.beRepaired(10);

    std::cout << "\n[TEST] s takes 0 damage\n";
    s.takeDamage(0);

    std::cout << "\n[TEST] s repairs 0 HP\n";
    s.beRepaired(0);

    std::cout << "\n[TEST] s takes fatal damage (999)\n";
    s.takeDamage(999);

    std::cout << "\n[TEST] s tries to attack after death\n";
    s.attack("Undead");

    std::cout << "\n[TEST] s tries to repair after death\n";
    s.beRepaired(5);

    std::cout << "\n[TEST] s tries guardGate after death\n";
    s.guardGate();
}

void testScavTrapCopy() {
    std::cout << "\n[TEST] Copy constructor ScavTrap b(a)\n";
    ScavTrap a("R2-D2");
    ScavTrap b(a);

    std::cout << "\n[TEST] Copy assignment ScavTrap c = a\n";
    ScavTrap c;
    c = a;
}

int main() {
    testScavTrapCopy();
    testScavTrapBasic();
    return 0;
}
