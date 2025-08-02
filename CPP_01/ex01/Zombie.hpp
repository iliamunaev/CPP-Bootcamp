#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
  public:
    Zombie() = default;
    ~Zombie();
    Zombie(const Zombie& other) = delete;
    Zombie& operator=(const Zombie& other) = delete;

    void announce(void);
    void setName(const std::string name);

  private:
    std::string m_name;
};

Zombie* zombieHorde(const int N, const std::string name);

#endif //ZOMBIE_HPP
