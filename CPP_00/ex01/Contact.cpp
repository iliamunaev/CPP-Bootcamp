// contact.cpp
#include <Contact.hpp>

Contact::Contact(
    int index,
    const std::string& firstName,
    const std::string& lastName,
    const std::string& nickName,
    const std::string& phoneNumber,
    const std::string& darkSecret
 ) :
    firstName(firstName),
    lastName(lastName),
    nickName(nickName),
    phoneNumber(phoneNumber),
    darkSecret(darkSecret)
{}

void    Contact::displayIndex() const {

    std::cout << ""

}
