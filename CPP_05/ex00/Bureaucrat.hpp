#pragma once

#include <iostream>

class Bureaucrat {
  public:
    Bureaucrat() = delete;
    ~Bureaucrat();
    Bureaucrat(const std::string& name, int grade);
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat& other) = delete;

    std::string getName() const;
    int getGrade() const;

    class GradeTooHighException : public std::exception {
      public:
        GradeTooHighException();
        const char* what() const noexcept override;

        private:
          std::string m_msg;
    };

    class GradeTooLowException : public std::exception {
      public:
        GradeTooLowException();
        const char* what() const noexcept override;

        private:
          std::string m_msg;
    };

  private:
    const std::string m_name;
    int m_grade;
};
