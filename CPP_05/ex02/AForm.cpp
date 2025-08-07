#include "AForm.hpp"

// Constructors/Destructors

AForm::AForm()
  : m_name("Default"), m_isSigned(false), 
    m_gradeToSign(0), m_gradeToExecute(0) {}

    



AForm::AForm(const std::string& name, const int gradeToSign, const int gradeToExecute)
  : m_name(name), m_isSigned(false), m_gradeToSign(gradeToSign), m_gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1) {
      throw AForm::GradeTooHighException();
    }
    if (gradeToSign > 150 || gradeToExecute > 150) {
      throw AForm::GradeTooLowException();
    }
}

AForm::~AForm() {}

// Getters
std::string AForm::getName() const {
  return m_name ;
}

int AForm::getGradeToSign() const {
  return m_gradeToSign ;
}

int AForm::getGradeToExecute() const {
  return m_gradeToExecute ;
}

bool AForm::getIsSigned() const {
  return m_isSigned ;
}

// Exceptions
AForm::GradeTooHighException::GradeTooHighException()
  : m_msg("Error: grade is too high.") {}

  const char* AForm::GradeTooHighException::what() const noexcept {
  return m_msg.c_str();
}

AForm::GradeTooLowException::GradeTooLowException()
  : m_msg("Error: grade is too low.") {}

  const char* AForm::GradeTooLowException::what() const noexcept {
  return m_msg.c_str();
}

// Overload
std::ostream& operator<<(std::ostream& os, const AForm& f) {
  std::string signStatus;
  if (f.getIsSigned()) {
    signStatus = "True";
  } else {
    signStatus = "False";
  }
  os << "AForm `" << f.getName()
      << "`, Signed: `"<< signStatus
      << "`, Grade to sign: `" << f.getGradeToSign()
      << "`, Grade to Execute: `" << f.getGradeToExecute()
      << "`." << std::endl;
  return os;
}

void AForm::beSigned(const Bureaucrat& b) {

  if (b.getGrade() <= m_gradeToSign) {
    if (!m_isSigned) {
      m_isSigned = true;
    }
  } else {
      throw AForm::GradeTooLowException();
    }
}

