#pragma once

#include <iostream>

#include "Bureaucrat.hpp"

class Form {
  public:
    Form() = delete;
    Form(const Form& other) = delete;
    Form& operator=(const Form& other) = delete;
    Form(const std::string& name, const int gradeToSign, const int gradeToExecute);
    ~Form();

    std::string getName() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    bool getIsSigned() const;
    void beSigned(const Bureaucrat& b);

    class GradeTooHighException : public std::exception {
      public:
        GradeTooHighException();
        const char* what() const noexcept override;

      private:
        const std::string m_msg;
    };

    class GradeTooLowException : public std::exception {
      public:
        GradeTooLowException();
        const char* what() const noexcept override;

      private:
        const std::string m_msg;
    };

  private:
    const std::string m_name;
    bool m_isSigned; // false default
    int m_gradeToSign;
    int m_gradeToExecute;
};

std::ostream& operator<<(std::ostream& os, const Form& f);

