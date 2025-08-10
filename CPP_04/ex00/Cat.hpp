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

class Cat : public Animal {
  public:
    Cat();
    ~Cat() override;
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);

    void makeSound(void) const override;
    std::string getType(void) const;
};

#endif // CAT_HPP
