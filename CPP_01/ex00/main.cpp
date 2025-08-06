#include "Zombie.hpp"

void testNewZombie() {
  std::cout << "\n[Test] newZombie (Heap Allocation)\n";

  Zombie* z = newZombie("HeapZombie");
  if (z) {
    z->announce();
    delete z;
  }
}

void testRandomChump() {
  std::cout << "\n[Test] randomChump (Stack Allocation)\n";
  randomChump("StackZombie");
}

void testMultipleZombies() {
  std::cout << "\n[Test] Multiple newZombies\n";

  Zombie* z1 = newZombie("Zombie1");
  Zombie* z2 = newZombie("Zombie2");

  if (z1 && z2) {
    z1->announce();
    z2->announce();
  }

  delete z1;
  delete z2;
}

void testNullZombie() {
  std::cout << "\n[Test] Simulate null zombie allocation\n";

  Zombie* z = nullptr;
  try {
    z = new Zombie("MaybeZombie");
    z->announce();
  } catch (...) {
    std::cout << "Failed to allocate zombie.\n";
  }

  delete z;
}

int main() {
  std::cout << "[Zombie Test Start]\n";

  testNewZombie();
  testRandomChump();
  testMultipleZombies();
  testNullZombie();

  std::cout << "\n[Zombie Test End]\n";
  return 0;
}
