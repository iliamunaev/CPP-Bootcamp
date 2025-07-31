#include "Weapon.hpp"

Weapon::Weapon() {};

Weapon::Weapon(std::string type) : _type(type) {};

Weapon::~Weapon() {};

// A getType() member function that returns a const reference to type
const std::string& Weapon::getType() {
	return _type;
}

// A setType() member function that sets type using the new one passed as parameter
void Weapon::setType(std::string type) {
	_type = type;
}
