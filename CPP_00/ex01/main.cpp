/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <imunaev-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:50:40 by imunaev-          #+#    #+#             */
/*   Updated: 2025/04/04 15:50:41 by imunaev-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "utils.hpp"

int main() {
    PhoneBook pbook;

    while (true) {
        std::string prompt = promptUser();

        if (prompt == "EXIT")
            break;
        else
            handlePrompt(prompt, pbook);
    }
    exitProgram();

    return 0;
}
