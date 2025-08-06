#include "Brain.hpp"

Brain::Brain() {
  std::cout << "Brain Default constructor is strted\n";
}

Brain::~Brain() {
  std::cout << "Brain Destructor is strted\n";
}

Brain::Brain(const Brain& other) : ideas( other.ideas) {
  std::cout << "Brain Copy constructor is started\n";
}

Brain& Brain::operator=(const Brain& other) {
    if (this != &other) {
        for (int i = 0; i < NUM_IDEAS; ++i) {
            this->ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

std::string Brain::getIdea(int i) const {
  if (i >= 0 && i < NUM_IDEAS) {
    return ideas[i];
  } else if (i < 0) {
    std::string msg = "Brain: mmm... you're tryint to reach Subconciouse";
    return msg;
  } else {
    std::string msg = "Brain: I'm not too smart to have so many ideas...";
    return msg;
  }
}

void Brain::setIdea(int i, const std::string& idea) {
  if (i >= 0 && i < NUM_IDEAS) {
    ideas[i] = idea;
  } else if (i < 0) {
    std::cout << "Brain: mmm... you're tryint to reach Subconciouse\n";
  } else {
    std::cout << "Brain: I'm not too smart to have so many ideas...\n";
  }
}
