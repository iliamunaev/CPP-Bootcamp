/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <imunaev-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:50:11 by imunaev-          #+#    #+#             */
/*   Updated: 2025/04/04 15:50:13 by imunaev-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : _index(0) {}

// Generic Setter
void Contact::setData(const std::string& data, int index) {
    if (index >= 0 && index < 5) {
        _userData[index] = data;
    }
}

// Generic Getter
std::string Contact::getData(int index) const {
    if (index >= 0 && index < 5) {
        return _userData[index];
    }
    return "";
}

void Contact::setIndex(unsigned short index) {
    _index = index;
}

unsigned short Contact::getIndex() const {
    return _index;
}
