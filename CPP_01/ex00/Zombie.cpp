#include "Zombie.hpp"

Zombie::Zombie(std::string name) : m_name(name) {
  std::cout << "Constructor for " << m_name << " called\n";
}

Zombie::~Zombie(void) {
    std::cout << "Destructor for " << m_name << " called\n";
}

Zombie* newZombie(std::string name) {
  try {
    return new Zombie(name);
  }
  catch (const std::bad_alloc& e) {
    std::cout << "Error: memory allocation failed\n";
    return nullptr;
  }
}

void Zombie::announce(void) {
  std::cout << m_name << ": BraiiiiiiinnnzzzZ...\n";
}

void randomChump(std::string name) {
  Zombie z(name);
  z.announce();
}
