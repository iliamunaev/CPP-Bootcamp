#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
    private:
        std::string _name;
        Weapon& _weapon;
    public:
        HumanA() = delete;
        HumanA(std::string name, Weapon& weapon);
        HumanA(const HumanA& other) = delete; // HumanA copy = original not allowded
        HumanA& operator=(const HumanA& other) = delete; // HumanA = HumanB not allowded
        ~HumanA();
        void attack();
    };

#endif // HUMAN_A_HPP
