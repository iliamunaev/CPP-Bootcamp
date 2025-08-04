#ifndef DOG_00_HPP
#define DOG_00_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal {
  public:
    Dog();
    ~Dog() override;
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);

    void makeSound(void) const override;
    std::string getType(void) const;
};

#endif // DOG_00_HPP
