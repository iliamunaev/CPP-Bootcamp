#include "Form.hpp"
#include "Bureaucrat.hpp"

// Constructors/Destructors
Form::Form(const std::string& name, const int gradeToSign, const int gradeToExecute)
  : m_name(name), m_isSigned(false), m_gradeToSign(gradeToSign), m_gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1) {
      throw Form::GradeTooHighException();
    }
    if (gradeToSign > 150 || gradeToExecute > 150) {
      throw Form::GradeTooLowException();
    }
}

Form::~Form() {}

// Getters
std::string Form::getName() const {
  return m_name ;
}

int Form::getGradeToSign() const {
  return m_gradeToSign ;
}

int Form::getGradeToExecute() const {
  return m_gradeToExecute ;
}

bool Form::getIsSigned() const {
  return m_isSigned ;
}

// Exceptions
Form::GradeTooHighException::GradeTooHighException()
  : m_msg("Error: grade is too high.") {}

  const char* Form::GradeTooHighException::what() const noexcept {
  return m_msg.c_str();
}

Form::GradeTooLowException::GradeTooLowException()
  : m_msg("Error: grade is too low.") {}

  const char* Form::GradeTooLowException::what() const noexcept {
  return m_msg.c_str();
}

// Overload
std::ostream& operator<<(std::ostream& os, const Form& f) {
  std::string signStatus;
  if (f.getIsSigned()) {
    signStatus = "True";
  } else {
    signStatus = "False";
  }
  os << "Form `" << f.getName()
      << "`, Signed: `"<< signStatus
      << "`, Grade to sign: `" << f.getGradeToSign()
      << "`, Grade to Execute: `" << f.getGradeToExecute()
      << "`." << std::endl;
  return os;
}

void Form::beSigned(const Bureaucrat& b) {

  if (b.getGrade() <= m_gradeToSign) {
    if (!m_isSigned) {
      m_isSigned = true;
    }
  } else {
      throw Form::GradeTooLowException();
    }
}

