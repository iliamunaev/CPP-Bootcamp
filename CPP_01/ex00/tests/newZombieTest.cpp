#include <iostream>

class Zombie {
    std::string _name;

  public:
    Zombie(std::string name);
    void announce(void);
    ~Zombie(void);
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


int main() {

  Zombie* z = newZombie("Heap");
  z->announce();

  delete z;
  z = nullptr;
  return 0;
}
