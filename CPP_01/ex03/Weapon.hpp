#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
  public:
    Weapon() = delete;
    Weapon(const std::string type);
    ~Weapon() = default;
    Weapon(const Weapon& other) = delete;
    Weapon& operator=(const Weapon& other) = delete;

    void setType(const std::string type);
    const std::string& getType(void);

  private:
    std::string m_type;

};

#endif // WEAPON_HPP
