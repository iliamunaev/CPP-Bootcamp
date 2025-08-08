#include "Bureaucrat.hpp"

// Constructors / Destructor
Bureaucrat::Bureaucrat(const std::string& name, int grade) : m_name(name) {
  if (grade < 1) {
    throw Bureaucrat::GradeTooHighException();
  } else if (grade > 150) {
    throw Bureaucrat::GradeTooLowException();
  } else {
    m_grade = grade;
  }
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
  : m_name(other.m_name), m_grade(other.m_grade) {}

Bureaucrat::~Bureaucrat() {}

// Getters / Setters
std::string Bureaucrat::getName() const {
  return m_name;
}

int Bureaucrat::getGrade() const {
  return m_grade;
}

// Exceptions
Bureaucrat::GradeTooHighException::GradeTooHighException()
  : m_msg("Error: grade is too high") {}

const char* Bureaucrat::GradeTooHighException::what() const noexcept {
  return m_msg.c_str();
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
  : m_msg("Error: grade is too low") {}

const char* Bureaucrat::GradeTooLowException::what() const noexcept {
  return m_msg.c_str();
}

// Grade handlers
void Bureaucrat::decreaseGrade() {
    if (m_grade >= 150) {
        throw Bureaucrat::GradeTooLowException();
    }
    ++m_grade;
}

void Bureaucrat::increaseGrade() {
  if(m_grade <= 1) {
    throw Bureaucrat::GradeTooHighException();
  }
  --m_grade;
}

// Operator overloder
std::ostream& operator<<(std::ostream& os, const Bureaucrat& b) {
    os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
    return os;
}
