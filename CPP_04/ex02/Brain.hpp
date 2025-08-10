/*
*  Brain.hpp
*
*  By: Ilia Munaev ilyamunaev@gmail.com
*  LinkedIn: https://www.linkedin.com/in/iliamunaev/
*
*  Created: 2025-08-10
*  Updated: 2025-08-10
*/
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
  public:
    static const std::size_t MaxIdeas = 100;

    Brain();
    Brain(const std::string& b) = delete;
    Brain(const Brain& other);
    Brain& operator=(const Brain& other);
    ~Brain();

    void setIdea(std::size_t i, const std::string& idea);
    const std::string& getIdea(std::size_t i) const;

  private:
    std::string ideas[MaxIdeas];
};

#endif //BRAIN_HPP
