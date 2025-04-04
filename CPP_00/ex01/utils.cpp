/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <imunaev-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:51:04 by imunaev-          #+#    #+#             */
/*   Updated: 2025/04/04 15:51:07 by imunaev-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std::string promptUser() {
    std::string input;
    std::cout << "Enter a command: 'ADD', 'SEARCH' or 'EXIT':" << std::endl;
    std::cout << "> ";

    std::getline(std::cin, input);

    return input;
}

void exitProgram() {
    std::cout << "Exiting program..." << std::endl;
}

void displayError() {
    std::cout << "Usage, type:" << std::endl; 
    std::cout << "      'ADD'    : save a new contact" << std::endl;
    std::cout << "      'SEARCH' : display a specific contact" << std::endl;
    std::cout << "      'EXIT'   : quit the program" << std::endl;
}
