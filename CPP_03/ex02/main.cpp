#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    // Default constructor
    // std::cout << "---------------- TEST: Default constructor ----------------" << std::endl;
    // ClapTrap john;
    // ScavTrap Iona;
    // FragTrap Baby;
    // std::cout << "---------------- END TEST ----------------\n" << std::endl;

    // Name constructor
    // std::cout << "---------------- TEST: Name constructor ----------------" << std::endl;
    // ClapTrap John("John");
    // ScavTrap Iona("Iona");
    // FragTrap Baby("Baby");
    // std::cout << "---------------- END TEST ----------------\n" << std::endl;

    //  Copy constructor
    std::cout << "---------------- TEST: Copy constructor ----------------" << std::endl;
    FragTrap Baby("Baby");
    FragTrap Bob(Baby);
    std::cout << "---------------- END TEST ----------------\n" << std::endl;


    // std::cout << "---------------- TEST: Attack() ----------------" << std::endl;
    // John.attack("Someone");
    // Iona.attack("Someone");
    // Baby.attack("Someone");
    // std::cout << "---------------- END TEST ----------------\n" << std::endl;


    // std::cout << "---------------- TEST: takeDamage() ----------------" << std::endl;
    // John.takeDamage(3);
    // Iona.takeDamage(3);
    // Baby.takeDamage(3);
    // std::cout << "---------------- END TEST ----------------\n" << std::endl;

    // std::cout << "---------------- TEST: beRepaired() ----------------" << std::endl;
    // John.beRepaired(1);
    // Iona.beRepaired(1);
    // Baby.beRepaired(1);
    // std::cout << "---------------- END TEST ----------------\n" << std::endl;


    // // Copy assignment operator
    // std::cout << "---------------- TEST: Copy assignment operator ----------------" << std::endl;
    // FragTrap Carl;
    // FragTrap John("John");

    // Carl = John;
    // std::cout << "---------------- END TEST ----------------\n" << std::endl;

    return 0;
}
