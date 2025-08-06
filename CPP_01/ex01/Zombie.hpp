#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
  public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    Zombie(const Zombie& other) = delete;
    Zombie& operator=(const Zombie& other) = delete;

    void announce(void);
    void setName(const std::string name);

  private:
    std::string m_name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
Zombie* zombieHorde(int N, std::string name);

#endif //ZOMBIE_HPP
