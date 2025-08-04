#ifndef HUMAN_A_03_HPP
#define HUMAN_A_03_HPP

#include "Weapon.hpp"

#include <string>

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

#endif // HUMAN_A_03_HPP
