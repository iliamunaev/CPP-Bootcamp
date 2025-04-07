/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <imunaev-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:50:40 by imunaev-          #+#    #+#             */
/*   Updated: 2025/04/07 11:27:19 by imunaev-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "utils.hpp"

int main() {
    PhoneBook pBook;

    while (true) {
        std::string prompt = promptUser();

        if (prompt == "EXIT")
            break;
        else if (prompt == "ADD")
            pBook.addContact();
        else if (prompt == "SEARCH")
            pBook.searchContact();
        else
            invalidInpit();
    }
    endProgram();

    return 0;
}
