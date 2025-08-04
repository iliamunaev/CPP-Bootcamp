#ifndef DOG_01_HPP
#define DOG_01_HPP

#include <iostream>

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
  public:
    Dog();
    ~Dog() override;
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);

    void makeSound(void) const override;
    std::string getType(void) const;

  private:
    Brain* brain;
};

#endif // DOG_01_HPP
