#include <iostream>

class Zombie {
    std::string _name;

  public:
    Zombie(std::string name);
    ~Zombie(void);
    void announce(void);
    void randomChump(std::string name);
};

void Zombie::announce(void) {
  std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

// Constructor: using initializer list
// More efficient
Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie(void) {
  std::cout << _name << ": is destroied\n";
}

// Constructor: default-construction + assignment
// Zombie::Zombie(std::string name) {
//   _name = name;
// }

Zombie* newZombie(std::string name) {
  Zombie* z = new Zombie(name);

  return z;
}

void randomChump(std::string name) {
  Zombie* z = newZombie(name);
  z->announce();

  delete z;
  z = nullptr;
}

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cout << "Error: Usage Zombie <name>\n";
    return 1;
  }

  randomChump(argv[1]);
  return 0;
}
