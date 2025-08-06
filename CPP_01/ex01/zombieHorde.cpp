#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
  if (N <= 0) {
    std::cout << "Invalid zombie count!\n";
    return nullptr;
  }
  
  Zombie* zh = nullptr;
  try {
    zh = new Zombie[N];
  }
  catch (const std::bad_alloc& e) {
    std::cout << "Memory allocation failed\n";
    return nullptr;
  }

  for (int i = 0; i < N; ++i)
    zh[i].setName(name);

  return zh;
}
