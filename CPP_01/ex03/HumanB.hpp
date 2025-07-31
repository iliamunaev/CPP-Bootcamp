#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB {
	private:
		std::string _name;
		Weapon* _weapon;

	public:
		HumanB() = delete;
		HumanB(std::string name);
		HumanB(const HumanB& other) = delete;
		HumanB& operator=(const HumanB& other) = delete;
		~HumanB();

		void setWeapon(Weapon& weapon);
		void attack();
};

#endif // HUMAN_B_HPP
