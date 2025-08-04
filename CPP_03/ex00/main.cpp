#include "ClapTrap.hpp"

int main() {
	ClapTrap Baby("Baby");

	Baby.attack("John");

	Baby.takeDamage(2);
	Baby.beRepaired(1);
	Baby.beRepaired(1);
	Baby.beRepaired(1);
	Baby.beRepaired(1);
	Baby.beRepaired(1);
	Baby.beRepaired(1);
	Baby.beRepaired(1);
	Baby.beRepaired(1);
	Baby.beRepaired(1);

	Baby.attack("John");



	Baby.takeDamage(17);
	Baby.takeDamage(1);


	return 0;
}
