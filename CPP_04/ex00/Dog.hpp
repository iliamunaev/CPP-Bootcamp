/*
*  Dog.hpp
*
*  By: Ilia Munaev ilyamunaev@gmail.com
*  LinkedIn: https://www.linkedin.com/in/iliamunaev/
*
*  Created: 2025-08-10
*  Updated: 2025-08-10
*/
#ifndef DOG_00_HPP
#define DOG_00_HPP

#include <iostream>

#include "Animal.hpp"

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
