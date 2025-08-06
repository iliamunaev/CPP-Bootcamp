#include "Zombie.hpp"

int main() {
  std::cout << "[Test 1] Create a horde of zombies named 'R2-D2'\n"
            << std::endl;

  int count = 5;
  Zombie *horde = zombieHorde(count, "R2-D2");

  if (!horde) {
    std::cerr << "Failed to create zombie horde!" << std::endl;
    return 1;
  }

  for (int i = 0; i < count; ++i) {
    std::cout << "Zombie #" << i + 1 << " -> ";
    horde[i].announce();
  }

  delete[] horde;

  std::cout << "\n[Test 1 Complete] Horde destroyed.\n"
            << std::endl;

  std::cout << "[Test 2] Edge case: zero zombies\n"
            << std::endl;

  Zombie *emptyHorde = zombieHorde(0, "Ghost");
  if (!emptyHorde) {
    std::cout << "Correctly handled zero-sized horde." << std::endl;
  } else {
    std::cerr << "Unexpected allocation!" << std::endl;
    delete[] emptyHorde;
  }

  return 0;
}
