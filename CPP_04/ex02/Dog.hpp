#ifndef DOG_02_HPP
#define DOG_02_HPP

#include <iostream>

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
  public:
    Dog();
    virtual ~Dog() override;
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);

    void makeSound(void) const override;
    std::string getType(void) const;
    Brain& getBrain(void) const;
    std::string getIdea(int i) const;

  private:
    Brain* brain;
};

#endif // DOG_02_HPP
