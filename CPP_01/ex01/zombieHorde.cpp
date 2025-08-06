#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
  if (N <= 0) {
    std::cerr << "Invalid zombie count!" << std::endl;
    return nullptr;
  }

  Zombie *zh = nullptr;
  try {
    zh = new Zombie[N];
  }
  catch (const std::bad_alloc &e) {
    std::cerr << "Memory allocation failed" << std::endl;
    return nullptr;
  }

  for (int i = 0; i < N; ++i)
    zh[i].setName(name);

  return zh;
}
