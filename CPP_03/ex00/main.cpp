#include "ClapTrap.hpp"
#include <iostream>

void testClapTrapBasic() {
    std::cout << "\n[TEST] Constructing ClapTrap a(\"Tom\")\n";
    ClapTrap a("Tom");

    std::cout << "\n[TEST] Tom attacks \"Jerry\"\n";
    a.attack("Jerry");

    std::cout << "\n[TEST] Tom takes 5 damage\n";
    a.takeDamage(5);

    std::cout << "\n[TEST] Tom repairs 3 HP\n";
    a.beRepaired(3);

    std::cout << "\n[TEST] Drain Tom's energy points\n";
    for (int i = 0; i < 20; ++i)
        a.attack("Neigbour");

    std::cout << "\n[TEST] Tom tries to repair with 0 EP\n";
    a.beRepaired(1);

    std::cout << "\n[TEST] Tom takes 0 damage\n";
    a.takeDamage(0);

    std::cout << "\n[TEST] Tom repairs 0 HP\n";
    a.beRepaired(0);

    std::cout << "\n[TEST] Tom takes fatal damage (999)\n";
    a.takeDamage(999);

    std::cout << "\n[TEST] Tom tries to attack after death\n";
    a.attack("Ghost");

    std::cout << "\n[TEST] Tom tries to repair after death\n";
    a.beRepaired(10);
}

void testClapTrapCopy() {
    std::cout << "\n[TEST] Copy constructor ClapTrap b(a)\n";
    ClapTrap a("R2-D2");
    ClapTrap b(a);

    std::cout << "\n[TEST] Copy assignment ClapTrap c = a\n";
    ClapTrap c;
    c = a;
}

int main() {
    testClapTrapBasic();
    testClapTrapCopy();
    return 0;
}
