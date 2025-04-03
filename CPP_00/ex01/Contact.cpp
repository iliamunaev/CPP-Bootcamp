// Contact.cpp
#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact() :
    _index(0),
    _firstName(""),
    _lastName(""),
    _nickname(""),
    _darkSecret("")
{}

// setup functions
void Contact::setIndex(unsigned short index) {
    _index = index;
}

void Contact::setFirstName(const std::string& firstName) {
    _firstName = firstName;
}

void Contact::setLastName(const std::string& lastName) {
    _lastName = lastName;
}

void Contact::setNickname(const std::string& nickname) {
    _nickname = nickname;
}

void Contact::setDarkSecret(const std::string& darkSecret) {
    _darkSecret = darkSecret;
}

// info providers
unsigned short Contact::getIndex() const {
    return _index;
}

std::string Contact::getFirstName() const {
    return _firstName;
}

std::string Contact::getLastName() const {
    return _lastName;
}

std::string Contact::getNickname() const {
    return _nickname;
}
