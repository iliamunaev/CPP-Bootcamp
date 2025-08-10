/*
*  Dog.hpp
*
*  By: Ilia Munaev ilyamunaev@gmail.com
*  LinkedIn: https://www.linkedin.com/in/iliamunaev/
*
*  Created: 2025-08-10
*  Updated: 2025-08-10
*/
#ifndef DOG_HPP
#define DOG_HPP

#include <string>

#include "Animal.hpp"

class Dog:public Animal {
  public:
    Dog();
    Dog(const std::string& t) = delete; // derived classes must set their type field depending on their name
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    ~Dog() override;

    void makeSound(void) const override;
};

#endif // DOG_HPP
