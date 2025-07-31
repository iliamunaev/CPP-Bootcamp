// #include "HumanA.hpp"
// #include "HumanB.hpp"
#include "Weapon.hpp"

int main(void) {

	Weapon* w = new Weapon;

	w->setType("Shit");

	const std::string t = w->getType();

	std::cout << t << " : is an assigned Type" << std::endl;

	delete w;
	return 0;
}
