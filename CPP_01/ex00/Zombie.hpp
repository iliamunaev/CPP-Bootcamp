#ifndef ZOMBIE_00_HPP
#define ZOMBIE_00_HPP

#include <iostream>

class Zombie {
  public:
    Zombie() = delete;
    Zombie(std::string name);
    ~Zombie();
    Zombie(const Zombie& other) = delete;
    Zombie& operator=(const Zombie& other) = delete;

    void announce(void);

  private:
    std::string m_name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif //ZOMBIE_00_HPP
