#pragma once

#include <iostream>

class Bureaucrat;

class AForm {
  public:
    AForm();
    AForm(const AForm& other);
    AForm& operator=(const AForm& other);
    AForm(const std::string& name, const int gradeToSign, const int gradeToExecute);
    ~AForm();

    virtual std::string getName() const;
    virtual int getGradeToSign() const;
    virtual int getGradeToExecute() const;
    virtual bool getIsSigned() const;
    virtual void beSigned(const Bureaucrat& b) = 0;

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

