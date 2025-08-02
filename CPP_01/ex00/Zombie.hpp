#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

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

void randomChump(const std::string name);

#endif //ZOMBIE_HPP
