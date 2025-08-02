#include "Zombie.hpp"

Zombie::~Zombie(void) {
  std::cout << m_name << ": is destroyed\n";
}

void Zombie::announce(void) {
  std::cout << m_name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(const std::string name) {
  m_name = name;
}
