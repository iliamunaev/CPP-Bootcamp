#include "Zombie.hpp"

Zombie *newZombie(std::string name) {
  try {
    return new Zombie(name);
  }
  catch (const std::bad_alloc &e) {
    std::cout << "Error: memory allocation failed" << std::endl;
    return nullptr;
  }
}
