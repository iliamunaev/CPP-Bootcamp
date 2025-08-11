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
#include "Brain.hpp"

class Cat : public Animal {
  public:
    Cat();
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
    virtual ~Cat() override;

    void makeSound(void) const override;
    void setIdea(std::size_t i, const std::string& idea);
    std::string getIdea(std::size_t i) const;

  private:
    Brain* brain;
};

#endif // CAT_HPP
