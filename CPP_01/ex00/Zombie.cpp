#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : m_name(name) {}

Zombie::~Zombie(void) {
  std::cout << m_name << ": is destroyed\n";
}

Zombie* newZombie(const std::string name) {
  try {
    return new Zombie(name);
  }
  catch (const std::bad_alloc& e) {
    std::cerr << "Error: memory allocation failed\n";
    return nullptr;
  }
}

void Zombie::announce(void) {
  std::cout << m_name << ": BraiiiiiiinnnzzzZ...\n";
}

void randomChump(const std::string name) {
  Zombie* z = newZombie(name);
  z->announce();

  delete z;
  z = nullptr;
}
