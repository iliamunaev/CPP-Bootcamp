#pragma once

#include <iostream>

class Bureaucrat;

class AForm {
  public:
    AForm();
    AForm(const AForm& other) = delete;
    AForm& operator=(const AForm& other) = delete;
    AForm(const std::string& name, const int gradeToSign, const int gradeToExecute);
    virtual ~AForm();

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

  protected:
    const std::string m_name;
    bool m_isSigned; // false default
    int m_gradeToSign;
    int m_gradeToExecute;
};

std::ostream& operator<<(std::ostream& os, const AForm& f);

