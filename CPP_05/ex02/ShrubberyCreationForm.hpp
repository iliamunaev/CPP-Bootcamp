#pragma once

#include "AForm.hpp"

#define SCF_SIGN 145
#define SCF_EXEC 137

class ShrubberyCreationForm : public AForm {
  public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string& name);
    ShrubberyCreationForm(const ShrubberyCreationForm& other);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
    ~ShrubberyCreationForm();


  private:
    const std::string m_name;
    bool m_isSigned; // false default
    int m_gradeToSign;
    int m_gradeToExecute;


};