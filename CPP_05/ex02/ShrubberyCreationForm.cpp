#include "ShrubberyCreationForm.hpp"

// Constructors / Destructors
ShrubberyCreationForm::ShrubberyCreationForm()
  : m_name("Default"),
    m_isSigned(false), 
    m_gradeToSign(SCF_SIGN),
    m_gradeToExecute(SCF_EXEC) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) 
  : m_name(other.m_name),
    m_isSigned(other.m_isSigned),
    m_gradeToSign(other.m_gradeToSign),
    m_gradeToExecute(other.m_gradeToExecute) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

