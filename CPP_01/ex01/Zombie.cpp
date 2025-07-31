#include "Zombie.hpp"

// Constructor: using initializer list
Zombie::Zombie(void) : _name("") {}
Zombie::Zombie(std::string name) : _name(name) {}

// Destructor
Zombie::~Zombie(void) {
  std::cout << _name << ": is destroyed\n";
}

// Class Zombie method
void Zombie::announce(void) {
  std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(std::string name) {
  _name = name;
}
