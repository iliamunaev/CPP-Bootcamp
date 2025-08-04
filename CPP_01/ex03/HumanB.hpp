#ifndef HUMAN_B_03_HPP
#define HUMAN_B_03_HPP

#include "Weapon.hpp"

class HumanB {
  public:
    HumanB() = delete;
    HumanB(const std::string name);
    ~HumanB() = default;
    HumanB(const HumanB& other) = delete;
    HumanB& operator=(const HumanB& other) = delete;

    void setWeapon(Weapon& weapon);
    void attack(void);

  private:
    std::string m_name;
    Weapon* m_weapon;
};

#endif // HUMAN_B_03_HPP
