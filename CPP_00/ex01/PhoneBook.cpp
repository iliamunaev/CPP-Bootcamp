//PhoneBook.cpp
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : num_contacts(0) {}

unsigned short PhoneBook::getNewIndex() {
    return num_contacts;
}
