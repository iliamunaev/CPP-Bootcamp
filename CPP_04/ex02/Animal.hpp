// Animal.hpp
#ifndef ANIMAL_02_HPP
#define ANIMAL_02_HPP

#include <string>

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
    std::string m_type;
};

#endif // ANIMAL_02_HPP
