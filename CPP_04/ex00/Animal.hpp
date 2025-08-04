#ifndef ANIMAL_00_HPP
#define ANIMAL_00_HPP

#include <iostream>

class Animal {
  public:
    Animal();
    virtual ~Animal();
    Animal(const std::string& type);
    Animal(const Animal& other);
    Animal& operator=(const Animal& other);

    virtual void makeSound(void) const;
    virtual std::string getType(void) const;

  protected:
    std::string m_type;
};

#endif // ANIMAL_00_HPP
