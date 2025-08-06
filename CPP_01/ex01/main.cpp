#include "Zombie.hpp"
#include <iostream>

int main() {
  std::cout << "[Test 1] Create a horde of 5 zombies named 'Walker'\n\n";

  int count = 5;
  Zombie* horde = zombieHorde(count, "Walker");

  if (!horde) {
    std::cout << "Failed to create zombie horde!\n";
    return 1;
  }

  for (int i = 0; i < count; ++i) {
    std::cout << "Zombie #" << i << " -> ";
    horde[i].announce();
  }

  delete[] horde;
  std::cout << "\n[Test 1 Complete] Horde destroyed.\n\n";

  std::cout << "[Test 2] Edge case: zero zombies\n\n";
  Zombie* emptyHorde = zombieHorde(0, "Ghost");
  if (!emptyHorde) {
    std::cout << "Correctly handled zero-sized horde.\n";
  } else {
    std::cout << "Unexpected allocation!\n";
    delete[] emptyHorde;
  }

  return 0;
}
