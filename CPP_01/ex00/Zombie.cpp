#include "Zombie.hpp"

Zombie::Zombie(std::string name) : m_name(name) {
  std::cout << "Constructor for " << m_name << " called" << std::endl;
}

Zombie::~Zombie(void) {
  std::cout << "Destructor for " << m_name << " called" << std::endl;
}

void Zombie::announce(void) {
  std::cout << m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

