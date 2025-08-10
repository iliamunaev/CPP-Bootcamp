/*
*  AAnimal.hpp
*
*  By: Ilia Munaev ilyamunaev@gmail.com
*  LinkedIn: https://www.linkedin.com/in/iliamunaev/
*
*  Created: 2025-08-10
*  Updated: 2025-08-10
*/
#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>

class AAnimal {
  public:
    AAnimal();
    AAnimal(const std::string& t);
    AAnimal(const AAnimal& other);
    AAnimal& operator=(const AAnimal& other);
    virtual ~AAnimal();

    virtual void makeSound(void) const = 0;
    virtual std::string getType(void) const;

  protected:
    std::string type;
};

#endif // AANIMAL_HPP
