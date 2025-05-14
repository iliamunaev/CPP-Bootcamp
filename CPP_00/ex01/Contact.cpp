/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ilia Munaev <ilyamunaev@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:50:11 by imunaev-          #+#    #+#             */
/*   Updated: 2025/05/14 11:09:01 by Ilia Munaev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file Contact.cpp
 * @brief Implementation of the Contact class.
 *
 * This file contains the implementation of the Contact class methods for setting,
 * displaying, and truncating contact information.
 */
#include "Contact.hpp"
#include "utils.hpp"

/**
 * @brief Sets the contact's information by prompting the user for input.
 *
 * Prompts the user to enter their first name, last name, nickname, phone number, and
 * darkest secret. Stores the input in the respective private member variables.
 */
void Contact::setContact() {
	_firstName = getUserData("First Name");
	_lastName = getUserData("Last Name");
	_nickname = getUserData("Nickname");
	_phoneNumber = getUserData("Phone Number");
	_darkestSecret = getUserData("Darkest Secret");
}

/**
 * @brief Truncates a string if it is longer than 10 characters.
 *
 * @param str The string to be truncated.
 * @return std::string A truncated string with a dot appended if it exceeds 10 characters.
 */
static std::string truncate(const std::string &str) {
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

/**
 * @brief Displays a summary of the contact's information in table format.
 *
 * @param index The index of the contact to be displayed.
 *
 * This method displays the index, first name, last name, and nickname. If any of these fields
 * exceed 10 characters, they are truncated and ended with a dot ('.').
 */
void Contact::displaySummary(int index) const {
	std::cout << "|" << std::setw(10) << index
			  << "|" << std::setw(10) << truncate(_firstName)
			  << "|" << std::setw(10) << truncate(_lastName)
			  << "|" << std::setw(10) << truncate(_nickname)
			  << "|\n";
}

/**
 * @brief Displays all details of a contact.
 *
 * This method displays all available information about the contact, including:
 * - First Name
 * - Last Name
 * - Nickname
 * - Phone Number
 * - Darkest Secret
 */
void Contact::displayDetails() const {
	std::cout << "First Name....: " << _firstName << "\n"
			  << "Last Name.....: " << _lastName << "\n"
			  << "Nickname......: " << _nickname << "\n"
			  << "Phone Number..: " << _phoneNumber << "\n"
			  << "Darkest Secret: " << _darkestSecret << "\n";
}

/**
 * @brief Checks if the contact is empty.
 *
 * @return true If the contact's first name is empty.
 * @return false If the contact's first name is not empty.
 */
bool Contact::isEmpty() const {
	return _firstName.empty();
}
