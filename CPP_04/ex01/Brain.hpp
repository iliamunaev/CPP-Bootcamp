#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

#define NUM_IDEAS 100

class Brain {
  public:
    Brain();
    Brain(const Brain& other);
    Brain& operator=(const Brain& other);
    ~Brain();

    std::string getIdea(int i) const;
    void setIdea(int i, const std::string& idea);

  private:
    std::string ideas[NUM_IDEAS];
};

#endif //BRAIN_HPP
