/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <imunaev-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:51:04 by imunaev-          #+#    #+#             */
/*   Updated: 2025/04/07 11:52:14 by imunaev-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

bool isNumber(const std::string &str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isdigit(str[i]))
            return false;
    }
    return true;
}

void handleInterruption(bool status) {
    if (!status) {
        std::cout << "\nInput interrupted. Exiting..." << std::endl;
        std::exit(0);
    }
}

std::string promptUser() {
    std::string input;
    std::cout << "Enter command (ADD, SEARCH, EXIT): " << std::endl;
    std::cout << "> ";

    bool status = std::getline(std::cin, input);
    handleInterruption(status);

    return input;
}

void invalidInpit() {
    std::cout << "Invalide input:" << std::endl;
    std::cout << "  'ADD'    : save a new contact" << std::endl;
    std::cout << "  'SEARCH' : display a specific contact" << std::endl;
    std::cout << "  'EXIT'   : quit the program" << std::endl;
}

std::string getUserData(const std::string &field)
{
    std::string input;

    while (true) {
        std::cout << field << ": ";
        bool status = std::getline(std::cin, input);

        handleInterruption(status);

        if (!input.empty())
            break;

        std::cout << "Field cannot be empty. Try again.\n";
    }

    return input;
}

void endProgram() {
    std::cout << "Exiting program..." << std::endl;
}
