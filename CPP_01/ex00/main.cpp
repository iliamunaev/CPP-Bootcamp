#include "Zombie.hpp"

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cout << "Error: Usage Zombie <name>\n";
    return 1;
  }

  randomChump(argv[1]);
  return 0;
}
