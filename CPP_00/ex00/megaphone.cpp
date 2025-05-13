/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ilia Munaev <ilyamunaev@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 09:14:13 by Ilia Munaev       #+#    #+#             */
/*   Updated: 2025/05/13 12:39:57 by Ilia Munaev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

std::string get_word(const std::string& word) {
    std::string uppercase_word;
    for (size_t i = 0; i < word.length(); ++i)
        uppercase_word += static_cast<char>(std::toupper(static_cast<unsigned char>(word[i])));
    return uppercase_word;
}

int main(int argc, char **argv) {
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else {
        for (int i = 1; i < argc; ++i) {
            std::string word = get_word(argv[i]);
            std::cout << word;
        }
    }
    std::cout << std:: endl;
    return 0;
}
