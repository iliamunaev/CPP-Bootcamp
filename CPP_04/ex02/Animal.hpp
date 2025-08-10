// Animal.hpp
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
  public:
    Animal();
    Animal(const std::string& type);
    Animal(const Animal& other);
    Animal& operator=(const Animal& other);
    virtual ~Animal();

    virtual void makeSound(void) const = 0;
    virtual std::string getType(void) const;

  protected:
    std::string type;
};

#endif // ANIMAL_HPP
