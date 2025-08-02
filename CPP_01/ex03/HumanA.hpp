#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
  public:
    HumanA() = delete;
    HumanA(const std::string name, Weapon& weapon);
    ~HumanA() = default;
    HumanA(const HumanA& other) = delete;
    HumanA& operator=(const HumanA& other) = delete;

    void attack();

  private:
    std::string m_name;
    Weapon& m_weapon;
};

#endif // HUMAN_A_HPP
