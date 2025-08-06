#include "Zombie.hpp"

Zombie::Zombie() : m_name("Default") {
  std::cout << "Default Constructor called" << std::endl;
}

Zombie::Zombie(std::string name) : m_name(name) {
  std::cout << "Constructor for " << m_name << " called" << std::endl;
}

Zombie::~Zombie(void) {
  std::cout << "Destructor for " << m_name << " called" << std::endl;
}

Zombie *newZombie(std::string name) {
  try {
    return new Zombie(name);
  }
  catch (const std::bad_alloc &e) {
    std::cerr << "Error: memory allocation failed" << std::endl;
    return nullptr;
  }
}

void Zombie::announce(void) {
  std::cout << m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void randomChump(std::string name) {
  Zombie z(name);
  z.announce();
}

void Zombie::setName(const std::string name) {
  m_name = name;
}
