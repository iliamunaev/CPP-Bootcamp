/*
*  Cat.hpp
*
*  By: Ilia Munaev ilyamunaev@gmail.com
*  LinkedIn: https://www.linkedin.com/in/iliamunaev/
*
*  Created: 2025-08-10
*  Updated: 2025-08-10
*/
#ifndef CAT_HPP
#define CAT_HPP

#include <string>

#include "Animal.hpp"

class Cat:public Animal {
  public:
    Cat();
    Cat(const std::string& t) = delete; // derived classes must set their type field depending on their name
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
    ~Cat() override;

    void makeSound(void) const override;
};

#endif // CAT_HPP
