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

#include <iostream>

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
  public:
    Dog();
    Dog(const std::string& type) = delete;
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    virtual ~Dog() override;

    void makeSound(void) const override;
    void setIdea(std::size_t i, const std::string& idea);
    std::string getIdea(std::size_t i) const;

  private:
    Brain* brain;
};

#endif // DOG_HPP
