//PhoneBook.cpp
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() :
	_numberOfContacts(0)
	{}

unsigned short PhoneBook::getNewIndex() {
    return _numberOfContacts;
}

void PhoneBook::incrementNumberOfContacts() {
	_numberOfContacts++;
}

Contact PhoneBook::addNewContact() {
	Contact newContact;
	newContact.setIndex(getNewIndex());
	incrementNumberOfContacts();
	std::cout << "New contact successfully added!" << std::endl;
	return newContact;
}
