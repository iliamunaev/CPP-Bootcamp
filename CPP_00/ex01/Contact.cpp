/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <imunaev-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:50:11 by imunaev-          #+#    #+#             */
/*   Updated: 2025/04/07 12:24:59 by imunaev-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "utils.hpp"

void Contact::setContact() {
	firstName = getUserData("First Name");
	lastName = getUserData("Last Name");
	nickname = getUserData("Nickname");
	phoneNumber = getUserData("Phone Number");
	darkestSecret = getUserData("Darkest Secret");
}

static std::string truncate(const std::string &str) {
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void Contact::displaySummary(int index) const {
	std::cout << "|" << std::setw(10) << index
			  << "|" << std::setw(10) << truncate(firstName)
			  << "|" << std::setw(10) << truncate(lastName)
			  << "|" << std::setw(10) << truncate(nickname)
			  << "|\n";
}

void Contact::displayDetails() const {
	std::cout << "First Name....: " << firstName << "\n"
			  << "Last Name.....: " << lastName << "\n"
			  << "Nickname......: " << nickname << "\n"
			  << "Phone Number..: " << phoneNumber << "\n"
			  << "Darkest Secret: " << darkestSecret << "\n";
}

bool Contact::isEmpty() const {
	return firstName.empty();
}
