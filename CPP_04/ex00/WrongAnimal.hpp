/*
*  WrongAnimal.hpp
*
*  By: Ilia Munaev ilyamunaev@gmail.com
*  LinkedIn: https://www.linkedin.com/in/iliamunaev/
*
*  Created: 2025-08-10
*  Updated: 2025-08-10
*/
#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <string>

class WrongAnimal {
  public:
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal(const std::string& t);
    WrongAnimal(const WrongAnimal& other);
    WrongAnimal& operator=(const WrongAnimal& other);

    void makeSound(void) const;
    const std::string& getType(void) const;

  protected:
    std::string type;
};

#endif // WRONG_ANIMAL_HPP
