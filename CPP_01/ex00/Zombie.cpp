#include "Zombie.hpp"

// Constructor: using initializer list
Zombie::Zombie(std::string name) : _name(name) {}

// Destructor
Zombie::~Zombie(void) {
  std::cout << _name << ": is destroyed\n";
}

// Create a new Zombie class
Zombie* newZombie(std::string name) {
  Zombie* z = new Zombie(name);

  return z;
}

// Class Zombie method
void Zombie::announce(void) {
  std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

// Create Zombie instance, call annonunce method, destroy instance
void randomChump(std::string name) {
  Zombie* z = newZombie(name);
  z->announce();

  delete z;
  z = nullptr;
}
