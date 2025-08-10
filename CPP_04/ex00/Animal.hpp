/*
*  Animal.hpp
*
*  By: Ilia Munaev ilyamunaev@gmail.com
*  LinkedIn: https://www.linkedin.com/in/iliamunaev/
*
*  Created: 2025-08-10
*  Updated: 2025-08-10
*/
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
  public:
    Animal();
    virtual ~Animal();
    Animal(const std::string& t);
    Animal(const Animal& other);
    Animal& operator=(const Animal& other);

    virtual void makeSound(void) const;
    virtual std::string getType(void) const;

  protected:
    std::string type;
};

#endif // ANIMAL_HPP
