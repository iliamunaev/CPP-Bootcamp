#include "Zombie.hpp"

void testNewZombie()
{
  std::cout << "\n[Test] newZombie (Heap Allocation)\n" << std::endl;

  Zombie *z = newZombie("HeapZombie");
  if (z)
  {
    z->announce();
    delete z;
  }
}

void testRandomChump()
{
  std::cout << "\n[Test] randomChump (Stack Allocation)\n" << std::endl;
  randomChump("StackZombie");
}

void testMultipleZombies()
{
  std::cout << "\n[Test] Multiple newZombies\n" << std::endl;

  Zombie *z1 = newZombie("Zombie1");
  Zombie *z2 = newZombie("Zombie2");

  if (z1 && z2)
  {
    z1->announce();
    z2->announce();
  }

  delete z1;
  delete z2;
}

int main()
{
  std::cout << "********* Test Start *********" << std::endl;

  testNewZombie();
  testRandomChump();
  testMultipleZombies();

  std::cout << "\n********* Test End *********" << std::endl;
  return 0;
}
