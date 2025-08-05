#include "FragTrap.hpp"
#include <iostream>

int main() {
    std::cout << "\n[TEST] Create FragTrap f(\"Frank\")\n";
    FragTrap f("Frank");

    std::cout << "\n[TEST] f requests a high five (alive)\n";
    f.highFivesGuys();  // Should print "Hey, high five!"

    std::cout << "\n[TEST] f attacks Enemy\n";
    f.attack("Enemy");

    std::cout << "\n[TEST] f takes 50 damage\n";
    f.takeDamage(50);

    std::cout << "\n[TEST] f repairs 30 HP\n";
    f.beRepaired(30);

    std::cout << "\n[TEST] Drain f's energy points\n";
    for (int i = 0; i < 100; ++i)
        f.attack("Drone");

    std::cout << "\n[TEST] f tries to repair with 0 EP\n";
    f.beRepaired(10);

    std::cout << "\n[TEST] f takes 0 damage\n";
    f.takeDamage(0);

    std::cout << "\n[TEST] f repairs 0 HP\n";
    f.beRepaired(0);

    std::cout << "\n[TEST] f takes fatal damage (999)\n";
    f.takeDamage(999);

    std::cout << "\n[TEST] f requests high five after death\n";
    f.highFivesGuys();  // Should print "...is dead"

    std::cout << "\n[TEST] f tries to attack after death\n";
    f.attack("Ghost");

    std::cout << "\n[TEST] f tries to repair after death\n";
    f.beRepaired(10);

    return 0;
}
