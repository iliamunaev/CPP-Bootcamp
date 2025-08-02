#ifndef HARL_05_HPP
#define HARL_05_HPP

#include <iostream>

#define NUM_LEVELS 4

class Harl {
  public:
    Harl();
    ~Harl() = default;
    Harl(const Harl& other) = delete;
    Harl& operator=(const Harl& other) = delete;

    void complain(const std::string& level);

  private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    void (Harl::*m_comments[NUM_LEVELS])(void);
};

#endif // HARL_05_HPP
